#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62624dd _public_62624dd
#define public_62624f0 _public_62624f0
#define public_6262503 _public_6262503
#define public_626253a _public_626253a
#define public_6262547 _public_6262547
#define public_626255d _public_626255d
#define public_626257d _public_626257d
#define public_6262586 _public_6262586
#define public_626259b _public_626259b
#define public_62625af _public_62625af
#define public_62625cd _public_62625cd
#define public_62625ee _public_62625ee

PROC_DECLARE(0x62624c0, internal_62624c0, public_62624c0);
extern "C" NAKED register_t __cdecl internal_62624c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_63991c0]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ebx, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], edi
        jae public_62624dd
        mov ebx, esi
        public_62624dd : nop
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebp, edi
        jne public_6262547
        cmp dword ptr ss : [ebp+8], ebx
        jae public_62624f0
        call dword ptr ds : [public_63991c4]
        public_62624f0 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6262503
        mov esi, eax
        public_6262503 : nop
        test esi, esi
        jbe public_626253a
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6399330]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_626253a
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_626253a : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        jmp public_62625ee
        public_6262547 : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_62625af
        cmp ebx, eax
        jne public_62625af
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_626255d
        mov eax, dword ptr ds : [public_63991d0]
        public_626255d : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_62625af
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_6262586
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_626257d
        cmp cl, 0xFF
        je public_626257d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6262586
        public_626257d : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6262586 : nop
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_626259b
        mov eax, dword ptr ds : [public_63991d0]
        public_626259b : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_62625ee
        public_62625af : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62625ee
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_63991d0]
        je public_62625cd
        mov esi, edi
        public_62625cd : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_62625ee : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [ebp+0x1C], edx
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ss : [ebp+0x20], eax
        xor eax, eax
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62624c0)
    }
}

#undef public_62624dd
#undef public_62624f0
#undef public_6262503
#undef public_626253a
#undef public_6262547
#undef public_626255d
#undef public_626257d
#undef public_6262586
#undef public_626259b
#undef public_62625af
#undef public_62625cd
#undef public_62625ee
