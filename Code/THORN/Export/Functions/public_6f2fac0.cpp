#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f300c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f302b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30d20);
CLANG_FORWARD_PROC_SYMBOL(public_6f315b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31600);
CLANG_FORWARD_PROC_SYMBOL(public_6f31980);
CLANG_FORWARD_PROC_SYMBOL(public_6f33070);

#define public_6f2fae0 _public_6f2fae0
#define public_6f2fb02 _public_6f2fb02
#define public_6f2fb20 _public_6f2fb20
#define public_6f2fb36 _public_6f2fb36
#define public_6f2fb56 _public_6f2fb56
#define public_6f2fbb4 _public_6f2fbb4
#define public_6f2fbc0 _public_6f2fbc0
#define public_6f2fbce _public_6f2fbce
#define public_6f2fbd5 _public_6f2fbd5
#define public_6f2fbd9 _public_6f2fbd9
#define public_6f2fbe2 _public_6f2fbe2

PROC_DECLARE(0x6f2fac0, internal_6f2fac0, public_6f2fac0);
extern "C" NAKED register_t __cdecl internal_6f2fac0()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov edx, dword ptr ds : [ebx+8]
        push ebp
        push esi
        mov dword ptr ss : [esp+0xC], eax
        mov ebp, dword ptr ds : [edx]
        push edi
        je public_6f2fb02
        nop 
        lea esp, ss:[esp]
        public_6f2fae0 : nop
        mov esi, dword ptr ds : [eax+0x10]
        lea edi, ss:[ebp+8]
        mov ecx, 5
        rep movsd
        lea ecx, ss:[esp+0x10]
        call public_6f315b0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x14]
        mov ebp, dword ptr ss : [ebp]
        jne public_6f2fae0
        public_6f2fb02 : nop
        lea ecx, ds:[ebx+4]
        call public_6f30d20
        mov esi, dword ptr ds : [ebx+0x34]
        cmp esi, esi
        mov edi, dword ptr ds : [ebx+0x30]
        lea ebp, ds:[ebx+0x2C]
        mov dword ptr ss : [esp+0x14], esi
        je public_6f2fb36
        nop 
        lea esp, ss:[esp]
        public_6f2fb20 : nop
        push esi
        mov ecx, edi
        call public_6f33070
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 0x10
        add edi, 0x10
        cmp esi, eax
        jne public_6f2fb20
        public_6f2fb36 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        push edi
        mov ecx, ebp
        call public_6f31600
        mov dword ptr ss : [ebp+8], edi
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f2fbe2
        public_6f2fb56 : nop
        mov esi, dword ptr ds : [eax+0x10]
        mov ecx, 5
        lea edi, ss:[esp+0x28]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x1C], edx
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        call public_6f302b0
        mov eax, dword ptr ds : [ebx+0x28]
        push eax
        mov ecx, ebp
        call public_6f300c0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6f2fbb4
        push ecx
        call public_6f31980
        add esp, 4
        jmp public_6f2fbd5
        public_6f2fbb4 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f2fbce
        lea esp, ss:[esp]
        public_6f2fbc0 : nop
        mov eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6f2fbc0
        public_6f2fbce : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6f2fbd9
        mov eax, ecx
        public_6f2fbd5 : nop
        mov dword ptr ss : [esp+0x10], eax
        public_6f2fbd9 : nop
        cmp eax, dword ptr ds : [ebx+0x14]
        jne public_6f2fb56
        public_6f2fbe2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x6f2fac0)
    }
}

#undef public_6f2fae0
#undef public_6f2fb02
#undef public_6f2fb20
#undef public_6f2fb36
#undef public_6f2fb56
#undef public_6f2fbb4
#undef public_6f2fbc0
#undef public_6f2fbce
#undef public_6f2fbd5
#undef public_6f2fbd9
#undef public_6f2fbe2
