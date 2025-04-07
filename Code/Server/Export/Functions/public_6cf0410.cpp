#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf0444 _public_6cf0444
#define public_6cf045b _public_6cf045b
#define public_6cf0470 _public_6cf0470
#define public_6cf04b2 _public_6cf04b2
#define public_6cf04c0 _public_6cf04c0
#define public_6cf0502 _public_6cf0502

PROC_DECLARE(0x6cf0410, internal_6cf0410, public_6cf0410);
extern "C" NAKED register_t __cdecl internal_6cf0410()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [ebp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x48], edi
        mov dword ptr ss : [ebp+0x6C], edi
        mov byte ptr ss : [ebp+0xA8], 0
        mov ebx, dword ptr ss : [ebp+0x78]
        mov edx, dword ptr ss : [ebp+0x74]
        mov eax, ebx
        cmp eax, ebx
        je public_6cf045b
        public_6cf0444 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebx
        rep movsd
        jne public_6cf0444
        xor edi, edi
        public_6cf045b : nop
        mov dword ptr ss : [ebp+0x78], edx
        mov ebx, dword ptr ss : [ebp+0x84]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6cf04b2
        lea ebx, ds:[ebx]
        public_6cf0470 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [ebp+0x88]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x88], ecx
        jne public_6cf0470
        public_6cf04b2 : nop
        mov ebx, dword ptr ss : [ebp+0x90]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6cf0502
        mov edi, edi
        public_6cf04c0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [ebp+0x94]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x94], ecx
        jne public_6cf04c0
        public_6cf0502 : nop
        mov dword ptr ss : [ebp+0xAC], edi
        mov dword ptr ss : [ebp+0xB0], edi
        mov dword ptr ss : [ebp+0xB4], edi
        mov dword ptr ss : [ebp+0xD0], edi
        mov dword ptr ss : [ebp+0xD8], edi
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xD4], 0xFFFFFFFF
        mov byte ptr ss : [ebp+0xDC], 0
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6cf0410)
    }
}

#undef public_6cf0444
#undef public_6cf045b
#undef public_6cf0470
#undef public_6cf04b2
#undef public_6cf04c0
#undef public_6cf0502
