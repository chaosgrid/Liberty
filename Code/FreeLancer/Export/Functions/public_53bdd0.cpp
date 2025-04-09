#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4000);
CLANG_FORWARD_PROC_SYMBOL(public_4c4320);
CLANG_FORWARD_PROC_SYMBOL(public_4c4590);
CLANG_FORWARD_PROC_SYMBOL(public_4c4f80);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_548eb0);

#define public_53be33 _public_53be33
#define public_53be35 _public_53be35
#define public_53be50 _public_53be50
#define public_53becf _public_53becf
#define public_53bee7 _public_53bee7
#define public_53befc _public_53befc
#define public_53bf44 _public_53bf44
#define public_53bf67 _public_53bf67
#define public_53bf71 _public_53bf71

PROC_DECLARE(0x53bdd0, internal_53bdd0, public_53bdd0);
extern "C" NAKED register_t __cdecl internal_53bdd0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x58]
        push 0
        push edi
        call public_5416c0
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_53bf71
        mov ebp, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x198]
        push edi
        call public_548eb0
        add esp, 4
        test al, al
        je public_53bf71
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_53be33
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_53be33
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_53be33
        mov ebx, eax
        jmp public_53be35
        public_53be33 : nop
        xor ebx, ebx
        public_53be35 : nop
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c6364]
        mov ebp, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_53bf71
        lea ecx, ds:[ecx]
        public_53be50 : nop
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        push edx
        call dword ptr ds : [public_5c6954]
        add esp, 4
        test al, al
        je public_53befc
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_53bee7
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        lea ecx, ds:[ebx+0xE4]
        push eax
        call dword ptr ds : [public_5c6574]
        mov edi, eax
        test edi, edi
        je public_53becf
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c6364]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        test al, al
        je public_53bf67
        mov ecx, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0x1A]
        fstp dword ptr ss : [esp]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        call public_4c4590
        add esp, 0x14
        jmp public_53bf67
        public_53becf : nop
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        push 0xFFFFFFFF
        push edx
        push 0
        call public_4c4320
        add esp, 0xC
        jmp public_53bf67
        public_53bee7 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push 0xFFFFFFFF
        push eax
        push 0
        call public_4c4320
        add esp, 0xC
        jmp public_53bf67
        public_53befc : nop
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push ecx
        call dword ptr ds : [public_5c6a44]
        add esp, 4
        test al, al
        je public_53bf44
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        lea ecx, ds:[ebx+0x144]
        push edx
        call dword ptr ds : [public_5c657c]
        test eax, eax
        je public_53bf67
        mov ecx, eax
        call dword ptr ds : [public_5c6598]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call public_4c4000
        add esp, 8
        jmp public_53bf67
        public_53bf44 : nop
        mov cx, word ptr ds : [esi+8]
        mov edx, dword ptr ds : [public_5c65ac]
        cmp cx, word ptr ds : [edx]
        jne public_53bf67
        mov ecx, ebx
        call dword ptr ds : [public_5c6504]
        push ecx
        fstp dword ptr ss : [esp]
        call public_4c4f80
        add esp, 4
        public_53bf67 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_53be50
        public_53bf71 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x53bdd0)
    }
}

#undef public_53be33
#undef public_53be35
#undef public_53be50
#undef public_53becf
#undef public_53bee7
#undef public_53befc
#undef public_53bf44
#undef public_53bf67
#undef public_53bf71
