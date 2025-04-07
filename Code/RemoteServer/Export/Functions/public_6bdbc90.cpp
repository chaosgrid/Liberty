#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdbc90);

PROC_DECLARE(0x6bdbc90, internal_6bdbc90, public_6bdbc90);
extern "C" NAKED register_t __cdecl internal_6bdbc90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        ret 
        UNREACHABLE_TRAP(0x6bdbc90)
    }
}
