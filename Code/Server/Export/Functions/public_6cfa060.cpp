#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d0bcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6cfa124 _public_6cfa124
#define public_6cfa183 _public_6cfa183
#define public_6cfa18a _public_6cfa18a
#define public_6cfa1d6 _public_6cfa1d6
#define public_6cfa1db _public_6cfa1db
#define public_6cfa1f2 _public_6cfa1f2
#define public_6cfa208 _public_6cfa208

PROC_DECLARE(0x6cfa060, internal_6cfa060, public_6cfa060);
extern "C" NAKED register_t __cdecl internal_6cfa060()
{
    __asm
    {
        mov eax, 0x1024
        call public_6d60160
        mov eax, dword ptr ss : [esp+0x1034]
        mov ecx, dword ptr ss : [esp+0x1030]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1034]
        mov byte ptr ds : [eax], 1
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        push eax
        or esi, 0xFFFFFFFF
        xor ebp, ebp
        mov byte ptr ss : [esp+0x13], 0
        mov dword ptr ss : [esp+0x14], edx
        call public_6d00280
        add esp, 4
        test eax, eax
        je public_6cfa1f2
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1038]
        push ebx
        push 0xFFFFFFFF
        push ecx
        push esi
        push 0x400
        lea edx, ss:[esp+0x44]
        push edx
        mov ecx, eax
        call public_6d0bcd0
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6cfa1db
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_6d66b14]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        call public_6d00280
        add esp, 4
        test eax, eax
        je public_6cfa1db
        mov edx, dword ptr ss : [esp+0x14]
        push 2
        push edx
        push esi
        push 0x400
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, eax
        call public_6d0bcd0
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jbe public_6cfa1db
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        mov ebx, edi
        public_6cfa124 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+edi*4+0x34]
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6cfa18a
        push eax
        call public_6d00670
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cfa183
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x140]
        public_6cfa183 : nop
        mov esi, dword ptr ss : [esp+0x103C]
        public_6cfa18a : nop
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fsubr st, st(1)
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_6cfa1d6
        inc edi
        cmp edi, ebp
        jb public_6cfa124
        jmp public_6cfa1db
        public_6cfa1d6 : nop
        mov byte ptr ss : [esp+0x13], 1
        public_6cfa1db : nop
        mov eax, dword ptr ss : [esp+0x24]
        xor esi, esi
        test eax, eax
        pop ebx
        jne public_6cfa208
        test ebp, ebp
        je public_6cfa1f2
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        jne public_6cfa208
        public_6cfa1f2 : nop
        mov ecx, dword ptr ss : [esp+0x1040]
        pop edi
        mov eax, esi
        pop esi
        mov byte ptr ds : [ecx], 1
        pop ebp
        add esp, 0x1024
        ret 
        public_6cfa208 : nop
        mov edx, dword ptr ss : [esp+0x1040]
        pop edi
        mov eax, esi
        pop esi
        mov byte ptr ds : [edx], 0
        pop ebp
        add esp, 0x1024
        ret 
        UNREACHABLE_TRAP(0x6cfa060)
    }
}

#undef public_6cfa124
#undef public_6cfa183
#undef public_6cfa18a
#undef public_6cfa1d6
#undef public_6cfa1db
#undef public_6cfa1f2
#undef public_6cfa208
