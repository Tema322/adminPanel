<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
<xsl:template match="alertSuccess">
<div class="alert alert-success">
    <xsl:value-of select="."/>
  </div>

</xsl:stylesheet>