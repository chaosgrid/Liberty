#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d3b80);

#define public_62d3bac _public_62d3bac

PROC_DECLARE(0x62d3b80, internal_62d3b80, public_62d3b80);
extern "C" NAKED register_t __cdecl internal_62d3b80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC0]
        cmp eax, 0xFFFFFFFF
        je public_62d3bac
        mov eax, dword ptr ds : [ecx+eax*4+0x174]
        test eax, eax
        je public_62d3bac
        mov byte ptr ds : [ecx+0xD8], 1
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, eax
        jmp dword ptr ds : [edx+0x34]
        public_62d3bac : nop
        ret 4
        UNREACHABLE_TRAP(0x62d3b80)
    }
}

#undef public_62d3bac
