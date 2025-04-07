#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4160b0);
CLANG_FORWARD_PROC_SYMBOL(public_416900);
CLANG_FORWARD_PROC_SYMBOL(public_416cd0);
CLANG_FORWARD_PROC_SYMBOL(public_416f90);
CLANG_FORWARD_PROC_SYMBOL(public_416fc0);
CLANG_FORWARD_PROC_SYMBOL(public_416fe0);
CLANG_FORWARD_PROC_SYMBOL(public_417070);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_JUMP_SYMBOL(public_41aabf);

#define public_416110 _public_416110
#define public_416125 _public_416125
#define public_416130 _public_416130
#define public_41613a _public_41613a
#define public_416141 _public_416141
#define public_416145 _public_416145
#define public_416171 _public_416171
#define public_41619b _public_41619b
#define public_4161b9 _public_4161b9
#define public_4161c0 _public_4161c0
#define public_4161e3 _public_4161e3

PROC_DECLARE(0x4160b0, internal_4160b0, public_4160b0);
extern "C" NAKED register_t __cdecl internal_4160b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41aabf @0x4160b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41aabf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], offset public_41e760
        mov eax, dword ptr ss : [ebp+0x60]
        cmp eax, 0xFFFFFFFF
        lea esi, ss:[ebp+0x60]
        mov dword ptr ss : [esp+0x20], 3
        je public_4161e3
        push esi
        mov ecx, offset public_429da4
        call public_416fe0
        push esi
        mov ecx, offset public_429da4
        mov edi, eax
        call public_416f90
        mov esi, eax
        cmp esi, edi
        je public_416145
        lea ecx, ds:[ecx]
        public_416110 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_416125
        push ecx
        call public_416fc0
        add esp, 4
        jmp public_416141
        public_416125 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_41613a
        lea ecx, ds:[ecx]
        public_416130 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_416130
        public_41613a : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_416141
        mov eax, ecx
        public_416141 : nop
        cmp eax, edi
        jne public_416110
        public_416145 : nop
        mov ecx, dword ptr ds : [public_429db4]
        test ecx, ecx
        mov eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_4161b9
        mov ecx, dword ptr ds : [public_429da8]
        cmp esi, dword ptr ds : [ecx]
        jne public_4161b9
        cmp edi, ecx
        jne public_4161b9
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_429dac]
        cmp edi, eax
        mov esi, edi
        je public_41619b
        public_416171 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_429da4
        call public_416cd0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_418978
        mov eax, dword ptr ds : [public_429dac]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_416171
        mov ecx, dword ptr ds : [public_429da8]
        public_41619b : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_429da8]
        mov dword ptr ds : [public_429db4], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_429da8]
        mov dword ptr ds : [eax+8], eax
        jmp public_4161e3
        public_4161b9 : nop
        cmp esi, edi
        je public_4161e3
        lea ecx, ds:[ecx]
        public_4161c0 : nop
        lea ecx, ss:[esp+0xC]
        mov esi, eax
        call public_417070
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_429da4
        call public_416900
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_4161c0
        public_4161e3 : nop
        lea ecx, ss:[ebp+0xE4]
        mov byte ptr ss : [esp+0x20], 2
        call public_418c24
        lea ecx, ss:[ebp+0xA4]
        mov byte ptr ss : [esp+0x20], 1
        call public_418c24
        lea ecx, ss:[ebp+0x64]
        mov byte ptr ss : [esp+0x20], 0
        call public_418c24
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_418a98
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4160b0)
    }
}

#undef public_416110
#undef public_416125
#undef public_416130
#undef public_41613a
#undef public_416141
#undef public_416145
#undef public_416171
#undef public_41619b
#undef public_4161b9
#undef public_4161c0
#undef public_4161e3
