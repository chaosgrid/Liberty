#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22ed0);

#define public_6d22ed7 _public_6d22ed7
#define public_6d22f03 _public_6d22f03
#define public_6d22f2e _public_6d22f2e

PROC_DECLARE(0x6d22ed0, internal_6d22ed0, public_6d22ed0);
extern "C" NAKED register_t __cdecl internal_6d22ed0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        public_6d22ed7 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xD
        je public_6d22f03
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6d22ed7
        public_6d22f03 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [ecx+0xC]
        jae public_6d22f2e
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0xA
        jne public_6d22f2e
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+8], ecx
        public_6d22f2e : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x10], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x14]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+0x14], ecx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d22ed0)
    }
}

#undef public_6d22ed7
#undef public_6d22f03
#undef public_6d22f2e
