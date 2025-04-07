#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8cb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8de46 _public_6d8de46
#define public_6d8de4d _public_6d8de4d
#define public_6d8de58 _public_6d8de58
#define public_6d8de5f _public_6d8de5f
#define public_6d8de70 _public_6d8de70
#define public_6d8de80 _public_6d8de80
#define public_6d8de97 _public_6d8de97
#define public_6d8deac _public_6d8deac
#define public_6d8deb4 _public_6d8deb4
#define public_6d8debb _public_6d8debb
#define public_6d8dec3 _public_6d8dec3
#define public_6d8deca _public_6d8deca
#define public_6d8ded6 _public_6d8ded6
#define public_6d8dedd _public_6d8dedd
#define public_6d8dee4 _public_6d8dee4
#define public_6d8def4 _public_6d8def4
#define public_6d8df04 _public_6d8df04
#define public_6d8df1c _public_6d8df1c
#define public_6d8df31 _public_6d8df31
#define public_6d8df44 _public_6d8df44
#define public_6d8df58 _public_6d8df58
#define public_6d8df5f _public_6d8df5f
#define public_6d8df65 _public_6d8df65
#define public_6d8df88 _public_6d8df88
#define public_6d8df8b _public_6d8df8b
#define public_6d8df9e _public_6d8df9e

PROC_DECLARE(0x6d8ddd0, internal_6d8ddd0, public_6d8ddd0);
extern "C" NAKED register_t __cdecl internal_6d8ddd0()
{
    __asm
    {
        sub esp, 0x14
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push 2
        push 1
        mov dword ptr ss : [esp+0x14], ebp
        call public_6d96300
        test eax, eax
        jne public_6d8df9e
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x20], ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], eax
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        add ecx, 0x24
        mov dword ptr ss : [esp+0x24], edx
        call public_6d8f510
        mov edx, dword ptr ss : [esp+0x10]
        add esi, 0x10
        lea ebx, ds:[edx+0x30]
        cmp ebx, esi
        je public_6d8df8b
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d8de46
        xor edi, edi
        jmp public_6d8de4d
        public_6d8de46 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 1
        public_6d8de4d : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6d8de58
        xor ecx, ecx
        jmp public_6d8de5f
        public_6d8de58 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 1
        public_6d8de5f : nop
        cmp edi, ecx
        ja public_6d8deac
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6d8de80
        lea ebx, ds:[ebx]
        public_6d8de70 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6d8de70
        public_6d8de80 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d8de97
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        lea ecx, ds:[eax+esi*2]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_6d8df8b
        public_6d8de97 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar esi, 1
        lea ecx, ds:[eax+esi*2]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_6d8df8b
        public_6d8deac : nop
        test eax, eax
        jne public_6d8deb4
        xor edi, edi
        jmp public_6d8debb
        public_6d8deb4 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 1
        public_6d8debb : nop
        test edx, edx
        jne public_6d8dec3
        xor ecx, ecx
        jmp public_6d8deca
        public_6d8dec3 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 1
        public_6d8deca : nop
        cmp edi, ecx
        ja public_6d8df44
        test edx, edx
        jne public_6d8ded6
        xor ecx, ecx
        jmp public_6d8dedd
        public_6d8ded6 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 1
        public_6d8dedd : nop
        lea ecx, ds:[eax+ecx*2]
        cmp eax, ecx
        je public_6d8def4
        public_6d8dee4 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6d8dee4
        public_6d8def4 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp ecx, eax
        mov ebp, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov edi, ecx
        je public_6d8df1c
        public_6d8df04 : nop
        push edi
        push ebp
        call public_6d8cb50
        mov eax, dword ptr ss : [esp+0x34]
        add edi, 2
        add esp, 8
        add ebp, 2
        cmp edi, eax
        jne public_6d8df04
        public_6d8df1c : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d8df31
        mov edx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [esp+0x14]
        xor esi, esi
        lea eax, ds:[edx+esi*2]
        jmp public_6d8df88
        public_6d8df31 : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [esp+0x14]
        sub esi, eax
        sar esi, 1
        lea eax, ds:[edx+esi*2]
        jmp public_6d8df88
        public_6d8df44 : nop
        push edx
        call public_6db1dc2
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6d8df58
        xor eax, eax
        jmp public_6d8df5f
        public_6d8df58 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 1
        public_6d8df5f : nop
        test eax, eax
        jge public_6d8df65
        xor eax, eax
        public_6d8df65 : nop
        lea ecx, ds:[eax+eax]
        push ecx
        call public_6db1f8a
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        push eax
        push ecx
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_6db3028]
        mov dword ptr ds : [ebx+0xC], eax
        public_6d8df88 : nop
        mov dword ptr ds : [ebx+8], eax
        public_6d8df8b : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x170]
        pop edi
        pop esi
        pop ebx
        public_6d8df9e : nop
        pop ebp
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d8ddd0)
    }
}

#undef public_6d8de46
#undef public_6d8de4d
#undef public_6d8de58
#undef public_6d8de5f
#undef public_6d8de70
#undef public_6d8de80
#undef public_6d8de97
#undef public_6d8deac
#undef public_6d8deb4
#undef public_6d8debb
#undef public_6d8dec3
#undef public_6d8deca
#undef public_6d8ded6
#undef public_6d8dedd
#undef public_6d8dee4
#undef public_6d8def4
#undef public_6d8df04
#undef public_6d8df1c
#undef public_6d8df31
#undef public_6d8df44
#undef public_6d8df58
#undef public_6d8df5f
#undef public_6d8df65
#undef public_6d8df88
#undef public_6d8df8b
#undef public_6d8df9e
