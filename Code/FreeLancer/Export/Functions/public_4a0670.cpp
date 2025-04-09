#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a0670);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5995c0);

#define public_4a06b0 _public_4a06b0
#define public_4a06be _public_4a06be
#define public_4a06c9 _public_4a06c9
#define public_4a06f0 _public_4a06f0
#define public_4a0728 _public_4a0728
#define public_4a073b _public_4a073b
#define public_4a0745 _public_4a0745
#define public_4a074c _public_4a074c
#define public_4a0760 _public_4a0760
#define public_4a0770 _public_4a0770
#define public_4a0789 _public_4a0789
#define public_4a0796 _public_4a0796
#define public_4a07de _public_4a07de
#define public_4a07ef _public_4a07ef

PROC_DECLARE(0x4a0670, internal_4a0670, public_4a0670);
extern "C" NAKED register_t __cdecl internal_4a0670()
{
    __asm
    {
        sub esp, 0xC2C
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        xor esi, esi
        mov dword ptr ds : [ebx+0xEC4], esi
        mov eax, dword ptr ds : [public_5d2ecc]
        lea ecx, ds:[ebx+0xB8C]
        mov dword ptr ds : [ebx+0xEC0], eax
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+4]
        push edi
        push edx
        push eax
        mov dword ptr ss : [esp+0x28], ebx
        call public_5995c0
        mov dword ptr ss : [esp+0x18], esi
        lea ebx, ds:[ebx]
        public_4a06b0 : nop
        mov ecx, dword ptr ds : [ebx+0xB90]
        test ecx, ecx
        jne public_4a06be
        xor eax, eax
        jmp public_4a06c9
        public_4a06be : nop
        mov eax, dword ptr ds : [ebx+0xB94]
        sub eax, ecx
        sar eax, 2
        public_4a06c9 : nop
        mov ecx, dword ptr ds : [ebx+0x7E0]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+esi*4+0x24], eax
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_4a0770
        lea esp, ss:[esp]
        public_4a06f0 : nop
        lea esi, ss:[ebp+8]
        mov ecx, 0x303
        lea edi, ss:[esp+0x30]
        rep movsd
        mov ecx, dword ptr ss : [esp+0xC38]
        mov dword ptr ss : [esp+0x14], ecx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        jne public_4a0728
        test ah, ah
        jns public_4a0760
        test eax, 0x30000
        jne public_4a0760
        lea ecx, ss:[esp+0x14]
        push ecx
        jmp public_4a074c
        public_4a0728 : nop
        cmp ecx, 1
        jne public_4a073b
        test eax, 0x38000
        jne public_4a0760
        test eax, 0x7FC0
        jmp public_4a0745
        public_4a073b : nop
        cmp ecx, 2
        jne public_4a0760
        test eax, 0x30000
        public_4a0745 : nop
        je public_4a0760
        lea eax, ss:[esp+0x14]
        push eax
        public_4a074c : nop
        mov edx, dword ptr ds : [ebx+0xB94]
        lea ecx, ds:[ebx+0xB8C]
        push 1
        push edx
        call public_537260
        public_4a0760 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [eax+4]
        jne public_4a06f0
        mov esi, dword ptr ss : [esp+0x18]
        public_4a0770 : nop
        inc esi
        cmp esi, 3
        mov dword ptr ss : [esp+0x18], esi
        jl public_4a06b0
        mov ecx, dword ptr ss : [esp+0x2C]
        lea eax, ds:[ecx-1]
        mov dword ptr ss : [esp+0x1C], eax
        public_4a0789 : nop
        mov ebp, dword ptr ss : [esp+0x28]
        cmp ebp, eax
        mov byte ptr ss : [esp+0x13], 1
        jge public_4a07ef
        public_4a0796 : nop
        mov eax, dword ptr ds : [ebx+0xB90]
        mov edi, dword ptr ds : [eax+ebp*4+4]
        mov edx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [eax+ebp*4]
        mov ecx, edi
        call dword ptr ds : [edx+0x1C]
        mov ebx, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        and ebx, 0x7FC0
        call dword ptr ds : [eax+0x1C]
        and eax, 0x7FC0
        cmp eax, ebx
        mov ebx, dword ptr ss : [esp+0x20]
        jbe public_4a07de
        mov ecx, dword ptr ds : [ebx+0xB90]
        mov dword ptr ds : [ecx+ebp*4], edi
        mov edx, dword ptr ds : [ebx+0xB90]
        mov dword ptr ds : [edx+ebp*4+4], esi
        mov byte ptr ss : [esp+0x13], 0
        public_4a07de : nop
        mov eax, dword ptr ss : [esp+0x1C]
        inc ebp
        cmp ebp, eax
        jl public_4a0796
        mov cl, byte ptr ss : [esp+0x13]
        test cl, cl
        je public_4a0789
        public_4a07ef : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC2C
        ret 
        UNREACHABLE_TRAP(0x4a0670)
    }
}

#undef public_4a06b0
#undef public_4a06be
#undef public_4a06c9
#undef public_4a06f0
#undef public_4a0728
#undef public_4a073b
#undef public_4a0745
#undef public_4a074c
#undef public_4a0760
#undef public_4a0770
#undef public_4a0789
#undef public_4a0796
#undef public_4a07de
#undef public_4a07ef
