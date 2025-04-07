#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdbc40);

PROC_DECLARE(0x6bdbc40, internal_6bdbc40, public_6bdbc40);
extern "C" NAKED register_t __cdecl internal_6bdbc40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x6bdbc40)
    }
}
