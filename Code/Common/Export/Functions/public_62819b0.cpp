#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62819b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62819e6 _public_62819e6
#define public_62819fb _public_62819fb
#define public_6281a12 _public_6281a12
#define public_6281a24 _public_6281a24

PROC_DECLARE(0x62819b0, internal_62819b0, public_62819b0);
extern "C" NAKED register_t __cdecl internal_62819b0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6281a24
        push ebp
        public_62819e6 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_62819fb
        mov ebp, eax
        public_62819fb : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6281a12
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6281a12 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_62819e6
        pop ebp
        public_6281a24 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62819b0)
    }
}

#undef public_62819e6
#undef public_62819fb
#undef public_6281a12
#undef public_6281a24
