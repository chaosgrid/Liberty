#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0df40);

#define public_6d028f9 _public_6d028f9
#define public_6d028fb _public_6d028fb
#define public_6d02927 _public_6d02927

PROC_DECLARE(0x6d028c0, internal_6d028c0, public_6d028c0);
extern "C" NAKED register_t __cdecl internal_6d028c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edx
        lea edi, ds:[esi-4]
        push edi
        push ebp
        push ebx
        call dword ptr ds : [public_6d645f4]
        test eax, eax
        jne public_6d02927
        test ebp, ebp
        je public_6d028f9
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        jmp public_6d028fb
        public_6d028f9 : nop
        xor eax, eax
        public_6d028fb : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        push eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0x24]
        push eax
        call public_6d0df40
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        public_6d02927 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFB
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d028c0)
    }
}

#undef public_6d028f9
#undef public_6d028fb
#undef public_6d02927
