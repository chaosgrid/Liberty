#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6801c30);
CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6801d10);
CLANG_FORWARD_PROC_SYMBOL(public_6801e80);
CLANG_FORWARD_PROC_SYMBOL(public_68021e0);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_68055c0);
CLANG_FORWARD_PROC_SYMBOL(public_6805e40);
CLANG_FORWARD_PROC_SYMBOL(public_6805f40);
CLANG_FORWARD_PROC_SYMBOL(public_6809be0);
CLANG_FORWARD_PROC_SYMBOL(public_6809c70);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

#define public_6809b0c _public_6809b0c
#define public_6809b1b _public_6809b1b
#define public_6809b58 _public_6809b58
#define public_6809b79 _public_6809b79
#define public_6809b9a _public_6809b9a
#define public_6809bac _public_6809bac
#define public_6809bc9 _public_6809bc9

PROC_DECLARE(0x6809ab0, internal_6809ab0, public_6809ab0);
extern "C" NAKED register_t __cdecl internal_6809ab0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6805f40
        push 2
        mov dword ptr ss : [esp+0x1C], eax
        call public_6809c70
        push 0
/*FIXUP push offset public_680e600 @0x6809acb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e600
        push 3
        mov ebx, eax
        call public_6805e40
        mov esi, eax
        push 4
        mov dword ptr ss : [esp+0x28], esi
        call public_6801cf0
        push ebx
        mov ebp, eax
        call public_6809be0
        add esp, 0x1C
        call public_680bdaa
        test ebp, ebp
        mov edi, eax
        je public_6809b0c
        push ebp
        call public_6802420
        add esp, 4
        call public_6801e80
        mov ebp, eax
        public_6809b0c : nop
        push edi
        call public_6802870
        add esp, 4
        xor eax, eax
        test edi, edi
        jle public_6809b58
        public_6809b1b : nop
        lea esi, ds:[eax+1]
        push esi
        push ebx
        call public_68055c0
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [public_680e604]
        add dword ptr ds : [eax], 0x10
        mov eax, esi
        add esp, 8
        cmp eax, edi
        jl public_6809b1b
        mov esi, dword ptr ss : [esp+0x10]
        public_6809b58 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_6801d10
        add esp, 4
        test ebp, ebp
        mov edi, eax
        je public_6809b79
        push ebp
        call public_6802420
        add esp, 4
        call public_6801e80
        public_6809b79 : nop
        test edi, edi
        je public_6809bac
        push 0x78
        push esi
        call dword ptr ds : [public_680c070]
        add esp, 8
        test eax, eax
        je public_6809b9a
        call public_68021e0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6809b9a : nop
        push 0
        call public_6802e00
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6809bac : nop
        push 0x70
        push esi
        call dword ptr ds : [public_680c070]
        add esp, 8
        test eax, eax
        je public_6809bc9
        call public_6801bf0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6809bc9 : nop
        call public_6801c30
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6809ab0)
    }
}

#undef public_6809b0c
#undef public_6809b1b
#undef public_6809b58
#undef public_6809b79
#undef public_6809b9a
#undef public_6809bac
#undef public_6809bc9
