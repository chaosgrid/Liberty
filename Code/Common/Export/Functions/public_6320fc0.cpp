#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631f670);
CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_6320fc0);
CLANG_FORWARD_PROC_SYMBOL(public_63227c0);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_6320ffa _public_6320ffa
#define public_6321015 _public_6321015
#define public_6321024 _public_6321024
#define public_632103b _public_632103b
#define public_6321063 _public_6321063
#define public_6321080 _public_6321080
#define public_632108d _public_632108d
#define public_6321092 _public_6321092
#define public_63210af _public_63210af
#define public_63210c6 _public_63210c6
#define public_63210d0 _public_63210d0

PROC_DECLARE(0x6320fc0, internal_6320fc0, public_6320fc0);
extern "C" NAKED register_t __cdecl internal_6320fc0()
{
    __asm
    {
        fld dword ptr ds : [public_63a3cd4]
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        fstp dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], ecx
        push edx
        mov ecx, offset public_64018c4
        mov edi, 0xFFFFFFFE
        call public_63227c0
        test al, al
        je public_6320ffa
        mov eax, dword ptr ds : [public_64018d8]
        jmp public_6321015
        public_6320ffa : nop
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_64018d8], eax
        public_6321015 : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6321024
        lea esi, ds:[eax+0x10]
        test esi, esi
        jne public_632103b
        public_6321024 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call public_6320290
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_63210d0
        public_632103b : nop
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx]
        push ebp
        push eax
        push ecx
        mov edi, 0xFFFFFFFD
        call public_631f670
        add esp, 0xC
        test eax, eax
        jne public_63210d0
        mov eax, dword ptr ds : [esi+8]
        xor ecx, ecx
        test eax, eax
        je public_6321063
        mov dword ptr ss : [ebp], ecx
        public_6321063 : nop
        mov ebx, dword ptr ds : [ebx]
        fld dword ptr ds : [public_6399408]
        cmp ebx, 0xFFFFFFFF
        je public_6321092
        mov eax, dword ptr ds : [esi+0x7C]
        mov esi, dword ptr ds : [esi+0x80]
        cmp eax, esi
        je public_6321092
        lea ecx, ds:[ecx]
        public_6321080 : nop
        cmp dword ptr ds : [eax], ebx
        je public_632108d
        add eax, 8
        cmp eax, esi
        jne public_6321080
        jmp public_6321092
        public_632108d : nop
        fstp st(0)
        fld dword ptr ds : [eax+4]
        public_6321092 : nop
        fadd dword ptr ss : [ebp]
        fst dword ptr ss : [ebp]
        fld dword ptr ds : [public_63a3ccc]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_63210af
        fstp st(0)
        fld dword ptr ds : [public_63a3ccc]
        public_63210af : nop
        fld dword ptr ds : [public_63a3cc8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_63210c6
        fstp st(0)
        fld dword ptr ds : [public_63a3cc8]
        public_63210c6 : nop
        pop edi
        fstp dword ptr ss : [ebp]
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        ret 
        public_63210d0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6320fc0)
    }
}

#undef public_6320ffa
#undef public_6321015
#undef public_6321024
#undef public_632103b
#undef public_6321063
#undef public_6321080
#undef public_632108d
#undef public_6321092
#undef public_63210af
#undef public_63210c6
#undef public_63210d0
