#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415ea0);
CLANG_FORWARD_PROC_SYMBOL(public_416110);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_415fc4 _public_415fc4
#define public_41600f _public_41600f
#define public_416043 _public_416043
#define public_416062 _public_416062
#define public_416069 _public_416069
#define public_416087 _public_416087
#define public_4160c1 _public_4160c1
#define public_4160cf _public_4160cf
#define public_4160d3 _public_4160d3
#define public_4160e6 _public_4160e6
#define public_4160ea _public_4160ea

PROC_DECLARE(0x415f60, internal_415f60, public_415f60);
extern "C" NAKED register_t __cdecl internal_415f60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6105b0]
        sub esp, 0xAC
        push ebp
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x158], eax
        push edi
        je public_415fc4
        mov dword ptr ds : [esi+0x158], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        fimul dword ptr ds : [public_610854]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x10]
        call public_416110
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        sub esp, 8
        fadd dword ptr ss : [esp+0x18]
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        push eax
        mov ecx, esi
        call public_415ea0
        public_415fc4 : nop
        mov edi, dword ptr ss : [esp+0xC0]
        test edi, edi
        je public_4160e6
        mov ebp, dword ptr ss : [esp+0xC4]
        test ebp, ebp
        je public_4160e6
        mov eax, dword ptr ds : [esi+0x118]
        mov ecx, dword ptr ds : [esi+0xD8]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x18], ecx
        call dword ptr ds : [public_5c6e0c]
        cmp ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], eax
        jne public_41600f
        push edi
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov ebp, eax
        public_41600f : nop
        mov al, byte ptr ds : [public_61669b]
        test al, al
        push ebx
        jne public_416043
        lea ecx, ss:[esp+0x28]
        push ecx
        mov byte ptr ds : [public_61669b], 1
        mov dword ptr ss : [esp+0x2C], 0x94
        call dword ptr ds : [public_5c6ef4]
        test eax, eax
        je public_416062
        cmp dword ptr ss : [esp+0x2C], 4
        seta byte ptr ds : [public_6105b4]
        public_416043 : nop
        mov al, byte ptr ds : [public_6105b4]
        test al, al
        je public_416069
        mov eax, dword ptr ds : [esi+0xD8]
        lea edx, ss:[esp+0x18]
        push edx
        push ebp
        push edi
        push eax
        call dword ptr ds : [public_616414]
        jmp public_4160c1
        public_416062 : nop
        mov byte ptr ds : [public_6105b4], 0
        public_416069 : nop
        mov ecx, dword ptr ds : [esi+0x120]
        xor edi, edi
        test ebp, ebp
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], ecx
        jbe public_4160cf
        mov ebx, dword ptr ds : [public_616410]
        public_416087 : nop
        mov edx, dword ptr ss : [esp+0xC4]
        movzx eax, word ptr ds : [edx+edi*2]
        mov edx, dword ptr ds : [esi+0xD8]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        push eax
        push edx
        mov dword ptr ss : [esp+0x20], 0
        call ebx
        test eax, eax
        je public_4160cf
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        add edx, ecx
        inc edi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x18], edx
        jb public_416087
        public_4160c1 : nop
        test eax, eax
        je public_4160cf
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x1C]
        jmp public_4160d3
        public_4160cf : nop
        xor esi, esi
        xor edi, edi
        public_4160d3 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        call dword ptr ds : [public_5c6e0c]
        pop ebx
        jmp public_4160ea
        public_4160e6 : nop
        xor esi, esi
        xor edi, edi
        public_4160ea : nop
        mov eax, dword ptr ss : [esp+0xBC]
        mov dword ptr ds : [eax+4], edi
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        add esp, 0xAC
        ret 0xC
        UNREACHABLE_TRAP(0x415f60)
    }
}

#undef public_415fc4
#undef public_41600f
#undef public_416043
#undef public_416062
#undef public_416069
#undef public_416087
#undef public_4160c1
#undef public_4160cf
#undef public_4160d3
#undef public_4160e6
#undef public_4160ea
