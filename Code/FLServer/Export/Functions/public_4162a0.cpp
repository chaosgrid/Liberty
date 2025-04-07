#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409840);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_416490);
CLANG_FORWARD_PROC_SYMBOL(public_416880);
CLANG_FORWARD_PROC_SYMBOL(public_416d20);
CLANG_FORWARD_PROC_SYMBOL(public_416d40);
CLANG_FORWARD_PROC_SYMBOL(public_417010);
CLANG_FORWARD_PROC_SYMBOL(public_417520);
CLANG_FORWARD_PROC_SYMBOL(public_418996);

#define public_416304 _public_416304
#define public_416314 _public_416314
#define public_416317 _public_416317
#define public_41631b _public_41631b
#define public_41634b _public_41634b
#define public_41638d _public_41638d
#define public_41639a _public_41639a
#define public_4163c6 _public_4163c6
#define public_4163d5 _public_4163d5

PROC_DECLARE(0x4162a0, internal_4162a0, public_4162a0);
extern "C" NAKED register_t __cdecl internal_4162a0()
{
    __asm
    {
        sub esp, 0x828
        push ebp
        push esi
        push edi
        mov edi, ecx
        call public_418996
        mov eax, dword ptr ds : [edi+0x84]
        mov esi, dword ptr ds : [public_41bbe8]
        push 0x10000
        push 0
        push 0x445
        push eax
        call esi
        mov ecx, dword ptr ds : [edi+0x84]
        push 0x200
        push 0
        push 0x435
        push ecx
        call esi
        mov ecx, dword ptr ds : [edi+0x60]
        mov ebp, dword ptr ds : [public_429da8]
        mov edx, dword ptr ds : [public_429dac]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], 0
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, edx
        mov al, 1
        je public_41631b
        public_416304 : nop
        cmp ecx, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov ebp, esi
        je public_416314
        mov esi, dword ptr ds : [esi]
        jmp public_416317
        public_416314 : nop
        mov esi, dword ptr ds : [esi+8]
        public_416317 : nop
        cmp esi, edx
        jne public_416304
        public_41631b : nop
        mov dl, byte ptr ds : [public_429db0]
        test dl, dl
        je public_41634b
        lea edx, ss:[esp+0xF]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, offset public_429da4
        mov byte ptr ss : [esp+0x23], 1
        call public_416d40
        push eax
        jmp public_4163d5
        public_41634b : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebp
        je public_41639a
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, offset public_429da4
        call public_416880
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_41638d
        lea edx, ss:[esp+0xD]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, offset public_429da4
        mov byte ptr ss : [esp+0x21], 1
        call public_416d40
        push eax
        jmp public_4163d5
        public_41638d : nop
        lea ecx, ss:[esp+0x10]
        call public_417010
        mov ecx, dword ptr ss : [esp+0x14]
        public_41639a : nop
        mov edx, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [edx+0xC], ecx
        jge public_4163c6
        lea eax, ss:[esp+0xE]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebp
        push esi
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, offset public_429da4
        mov byte ptr ss : [esp+0x22], 1
        call public_416d40
        push eax
        jmp public_4163d5
        public_4163c6 : nop
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x10], 0
        push ecx
        public_4163d5 : nop
        lea ecx, ss:[esp+0x24]
        call public_416d20
        mov edx, dword ptr ss : [esp+0x1C]
        push 0x400
        lea eax, ss:[esp+0x38]
        mov dword ptr ds : [edx+0x10], edi
        mov ecx, dword ptr ds : [edi+0x60]
        push eax
        push ecx
        call public_417520
        mov eax, dword ptr ds : [edi+0x104]
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        call public_409840
        add esp, 0x14
        call public_40cdc0
        mov ecx, dword ptr ds : [public_41bb88]
        mov dword ptr ds : [ecx], offset _public_416490
        call public_40ce70
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x828
        ret 
        UNREACHABLE_TRAP(0x4162a0)
    }
}

#undef public_416304
#undef public_416314
#undef public_416317
#undef public_41631b
#undef public_41634b
#undef public_41638d
#undef public_41639a
#undef public_4163c6
#undef public_4163d5
