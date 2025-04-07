#include "Server-PCH.h"


#define public_6ceaff9 _public_6ceaff9
#define public_6ceaffb _public_6ceaffb
#define public_6ceb05a _public_6ceb05a
#define public_6ceb094 _public_6ceb094
#define public_6ceb096 _public_6ceb096
#define public_6ceb0de _public_6ceb0de
#define public_6ceb0e0 _public_6ceb0e0
#define public_6ceb0f6 _public_6ceb0f6
#define public_6ceb0fa _public_6ceb0fa
#define public_6ceb112 _public_6ceb112
#define public_6ceb116 _public_6ceb116
#define public_6ceb127 _public_6ceb127
#define public_6ceb12f _public_6ceb12f
#define public_6ceb187 _public_6ceb187
#define public_6ceb1a6 _public_6ceb1a6
#define public_6ceb1ef _public_6ceb1ef
#define public_6ceb1fa _public_6ceb1fa

PROC_DECLARE(0x6ceafc0, internal_6ceafc0, public_6ceafc0);
extern "C" NAKED register_t __cdecl internal_6ceafc0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        sub esp, 8
        fcomp dword ptr ds : [public_6d65188]
        push ebp
        push esi
        push edi
        mov edi, ecx
        fnstsw ax
        test ah, 0x44
        jnp public_6ceb1fa
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6ceaff9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6ceaff9
        mov ebp, eax
        jmp public_6ceaffb
        public_6ceaff9 : nop
        xor ebp, ebp
        public_6ceaffb : nop
        fld dword ptr ss : [ebp+0x19C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jnp public_6ceb1fa
        fld dword ptr ss : [ebp+0x19C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jnp public_6ceb1fa
        mov edx, dword ptr ds : [public_6d642c4]
        mov ecx, dword ptr ss : [esp+0x1C]
        xor eax, eax
        mov ax, word ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d642a0]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6ceb05a
        mov ecx, dword ptr ss : [ebp+0x198]
        mov dword ptr ss : [esp+0x10], ecx
        public_6ceb05a : nop
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6d65188]
        mov dword ptr ss : [esp+0xC], edx
        fnstsw ax
        test ah, 0x41
        jne public_6ceb116
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edi+0x10]
        test edx, edx
        je public_6ceb094
        mov ecx, dword ptr ds : [edx+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_6ceb094
        mov ecx, edx
        jmp public_6ceb096
        public_6ceb094 : nop
        xor ecx, ecx
        public_6ceb096 : nop
        mov ecx, dword ptr ds : [ecx+0xB4]
        test ecx, ecx
        push ebx
        jbe public_6ceb0f6
        mov ebx, dword ptr ds : [public_6d90264]
        lea esi, ds:[ecx-1]
        cmp esi, ebx
        jae public_6ceb0f6
        mov ebx, dword ptr ds : [public_6d90260]
        imul esi, 0x418
        cmp dword ptr ds : [esi+ebx+0x348], 0
        je public_6ceb0f6
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+ebx-0x34], eax
        jne public_6ceb0f6
        test edx, edx
        je public_6ceb0de
        mov eax, dword ptr ds : [edx+0x4C]
        and eax, 3
        cmp al, 3
        je public_6ceb0e0
        public_6ceb0de : nop
        xor edx, edx
        public_6ceb0e0 : nop
        mov ecx, dword ptr ds : [edx+0xB4]
        imul ecx, 0x418
        fld dword ptr ds : [ecx+ebx-0x54]
        fmul dword ptr ss : [esp+0x1C]
        jmp public_6ceb0fa
        public_6ceb0f6 : nop
        fld dword ptr ss : [esp+0x1C]
        public_6ceb0fa : nop
        fsubr dword ptr ss : [esp+0x14]
        pop ebx
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6ceb112
        fstp dword ptr ss : [esp+0xC]
        jmp public_6ceb12f
        public_6ceb112 : nop
        fstp st(0)
        jmp public_6ceb127
        public_6ceb116 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6ceb12f
        public_6ceb127 : nop
        mov dword ptr ss : [esp+0xC], 0
        public_6ceb12f : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi]
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x1B8]
        test al, al
        je public_6ceb1a6
        mov eax, dword ptr ss : [ebp+0x19C]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [edx+0x1A0]
        fsubr dword ptr ds : [public_6d65520]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_6d65520]
        fdiv dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_6ceb187
        mov eax, dword ptr ss : [esp+0x10]
        fstp st(0)
        mov dword ptr ss : [esp+0xC], eax
        jmp public_6ceb1a6
        public_6ceb187 : nop
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6ceb1a6
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0xC]
        public_6ceb1a6 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_6ceb1fa
        mov edx, dword ptr ds : [public_6d642c4]
        mov ecx, dword ptr ss : [esp+0xC]
        xor eax, eax
        mov ax, word ptr ds : [edx]
        push 0
        push ecx
        mov ecx, esi
        push eax
        call dword ptr ds : [public_6d641ec]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jp public_6ceb1ef
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 8
        ret 8
        public_6ceb1ef : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 8
        ret 8
        public_6ceb1fa : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ceafc0)
    }
}

#undef public_6ceaff9
#undef public_6ceaffb
#undef public_6ceb05a
#undef public_6ceb094
#undef public_6ceb096
#undef public_6ceb0de
#undef public_6ceb0e0
#undef public_6ceb0f6
#undef public_6ceb0fa
#undef public_6ceb112
#undef public_6ceb116
#undef public_6ceb127
#undef public_6ceb12f
#undef public_6ceb187
#undef public_6ceb1a6
#undef public_6ceb1ef
#undef public_6ceb1fa
