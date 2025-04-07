#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f24800);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f22f9e _public_6f22f9e
#define public_6f22fa6 _public_6f22fa6
#define public_6f22fac _public_6f22fac
#define public_6f22fd0 _public_6f22fd0
#define public_6f22fe4 _public_6f22fe4
#define public_6f22fee _public_6f22fee
#define public_6f22ff3 _public_6f22ff3
#define public_6f23010 _public_6f23010
#define public_6f23027 _public_6f23027
#define public_6f23029 _public_6f23029
#define public_6f2303b _public_6f2303b
#define public_6f2305a _public_6f2305a
#define public_6f2306d _public_6f2306d

PROC_DECLARE(0x6f22f80, internal_6f22f80, public_6f22f80);
extern "C" NAKED register_t __cdecl internal_6f22f80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x48]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        shl esi, 4
        mov ecx, dword ptr ds : [esi+edx+4]
        add esi, edx
        test ecx, ecx
        push edi
        jne public_6f22f9e
        xor eax, eax
        jmp public_6f22fa6
        public_6f22f9e : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f22fa6 : nop
        test eax, eax
        jge public_6f22fac
        xor eax, eax
        public_6f22fac : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6f57e9c
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov ebp, eax
        mov edi, ebp
        je public_6f22fe4
        lea ebx, ds:[ebx]
        public_6f22fd0 : nop
        push esi
        push edi
        call public_6f24800
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_6f22fd0
        public_6f22fe4 : nop
        xor esi, esi
        test ebp, ebp
        jne public_6f22fee
        xor edi, edi
        jmp public_6f22ff3
        public_6f22fee : nop
        sub edi, ebp
        sar edi, 2
        public_6f22ff3 : nop
        mov eax, edi
        cdq 
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        mov eax, ecx
        cdq 
        sub eax, edx
        mov edx, eax
        sar edx, 1
        test ecx, ecx
        je public_6f2303b
        lea esp, ss:[esp]
        public_6f23010 : nop
        fld dword ptr ss : [ebp+ecx*4]
        mov esi, ecx
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        mov eax, esi
        jne public_6f23027
        sub ecx, edx
        jmp public_6f23029
        public_6f23027 : nop
        add ecx, edx
        public_6f23029 : nop
        sub eax, ecx
        cdq 
        xor eax, edx
        sub eax, edx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp ecx, esi
        mov edx, eax
        jne public_6f23010
        public_6f2303b : nop
        fld dword ptr ss : [ebp+esi*4]
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_6f2305a
        fld dword ptr ss : [esp+0x18]
        fsub st, st(1)
        fld dword ptr ss : [ebp+esi*4+4]
        fsub st, st(2)
        fdivp 
        jmp public_6f2306d
        public_6f2305a : nop
        fld dword ptr ss : [ebp+esi*4-4]
        dec esi
        fld dword ptr ss : [esp+0x18]
        fsub st, st(1)
        fxch st(2)
        fsub st, st(1)
        fdivp st(2), st
        fxch 
        public_6f2306d : nop
        mov edx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        push ebp
        fstp st(0)
        mov dword ptr ds : [edx], esi
        call public_6f57e26
        fld dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f22f80)
    }
}

#undef public_6f22f9e
#undef public_6f22fa6
#undef public_6f22fac
#undef public_6f22fd0
#undef public_6f22fe4
#undef public_6f22fee
#undef public_6f22ff3
#undef public_6f23010
#undef public_6f23027
#undef public_6f23029
#undef public_6f2303b
#undef public_6f2305a
#undef public_6f2306d
