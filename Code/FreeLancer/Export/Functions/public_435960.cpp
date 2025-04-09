#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435960);
CLANG_FORWARD_PROC_SYMBOL(public_435b80);

#define public_435984 _public_435984
#define public_435998 _public_435998
#define public_4359a3 _public_4359a3
#define public_4359ab _public_4359ab
#define public_4359cc _public_4359cc
#define public_4359cf _public_4359cf
#define public_4359dd _public_4359dd
#define public_4359e2 _public_4359e2
#define public_4359ea _public_4359ea
#define public_4359f2 _public_4359f2
#define public_435a12 _public_435a12
#define public_435a15 _public_435a15
#define public_435a5c _public_435a5c
#define public_435b05 _public_435b05

PROC_DECLARE(0x435960, internal_435960, public_435960);
extern "C" NAKED register_t __cdecl internal_435960()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+4]
        sub esp, 0x3C
        test eax, eax
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [edx+0x1C]
        push edi
        mov ebp, ecx
        je public_435984
        cmp eax, dword ptr ds : [public_673344]
        je public_435984
        mov esi, 2
        public_435984 : nop
        mov eax, dword ptr ds : [edx+0x18]
        test eax, eax
        je public_4359cf
        cmp byte ptr ds : [eax], 0
        je public_4359cf
        mov esi, dword ptr ds : [public_5c60e8]
        xor ebx, ebx
        public_435998 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_4359a3
        xor eax, eax
        jmp public_4359ab
        public_4359a3 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 3
        public_4359ab : nop
        cmp ebx, eax
        jge public_435b05
        mov eax, dword ptr ds : [ecx+ebx*8+4]
        test eax, eax
        jne public_4359cc
        mov eax, dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ds : [ecx+ebx*8]
        push eax
        call esi
        test al, al
        mov edx, dword ptr ss : [esp+0x50]
        jne public_435a15
        public_4359cc : nop
        inc ebx
        jmp public_435998
        public_4359cf : nop
        cmp esi, 1
        je public_4359dd
        cmp esi, 2
        jne public_435a5c
        public_4359dd : nop
        mov ecx, dword ptr ss : [ebp+4]
        xor ebx, ebx
        public_4359e2 : nop
        test ecx, ecx
        jne public_4359ea
        xor eax, eax
        jmp public_4359f2
        public_4359ea : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 3
        public_4359f2 : nop
        cmp ebx, eax
        jge public_435b05
        mov eax, dword ptr ds : [ecx+ebx*8+4]
        test eax, eax
        jne public_435a12
        mov eax, dword ptr ds : [ecx+ebx*8]
        cmp esi, dword ptr ds : [eax+0x34]
        jne public_435a12
        mov edi, dword ptr ds : [edx+0x20]
        cmp edi, dword ptr ds : [eax+0x38]
        je public_435a15
        public_435a12 : nop
        inc ebx
        jmp public_4359e2
        public_435a15 : nop
        cmp ebx, 0xFFFFFFFF
        je public_435b05
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [eax+ebx*8]
        mov eax, dword ptr ds : [eax+ebx*8]
        sub esp, 0x30
        mov edi, esp
        add esi, 4
        mov ecx, 0xC
        push 0
        rep movsd
        mov ecx, dword ptr ss : [esp+0x88]
        push ecx
        push ebx
        push eax
        push edx
        call public_435b80
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 0x44
        mov dword ptr ds : [ecx+ebx*8+4], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 8
        public_435a5c : nop
        sub esp, 0x30
        mov dword ptr ss : [esp+0x40], 0
        mov eax, dword ptr ss : [esp+0x40]
        mov edi, esp
        mov dword ptr ss : [esp+0x44], 0
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x48], 0
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x54], eax
        mov ecx, 0xC
        lea esi, ss:[esp+0x4C]
        push 1
        mov dword ptr ss : [esp+0x7C], 0x3F800000
        mov dword ptr ss : [esp+0x6C], 0x3F800000
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        rep movsd
        mov ecx, dword ptr ss : [esp+0x88]
        push ecx
        push 0xFFFFFFFF
        push 0
        push edx
        call public_435b80
        add esp, 0x44
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 8
        public_435b05 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x435960)
    }
}

#undef public_435984
#undef public_435998
#undef public_4359a3
#undef public_4359ab
#undef public_4359cc
#undef public_4359cf
#undef public_4359dd
#undef public_4359e2
#undef public_4359ea
#undef public_4359f2
#undef public_435a12
#undef public_435a15
#undef public_435a5c
#undef public_435b05
