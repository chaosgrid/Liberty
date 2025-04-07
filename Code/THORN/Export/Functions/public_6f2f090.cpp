#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f090);
CLANG_FORWARD_PROC_SYMBOL(public_6f31060);
CLANG_FORWARD_PROC_SYMBOL(public_6f311d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f311e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31890);
CLANG_FORWARD_PROC_SYMBOL(public_6f31980);
CLANG_FORWARD_PROC_SYMBOL(public_6f31a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f586f6);

#define public_6f2f0d0 _public_6f2f0d0
#define public_6f2f0f4 _public_6f2f0f4
#define public_6f2f100 _public_6f2f100
#define public_6f2f10a _public_6f2f10a
#define public_6f2f10f _public_6f2f10f
#define public_6f2f111 _public_6f2f111
#define public_6f2f116 _public_6f2f116
#define public_6f2f17c _public_6f2f17c
#define public_6f2f180 _public_6f2f180
#define public_6f2f1a4 _public_6f2f1a4
#define public_6f2f1d6 _public_6f2f1d6
#define public_6f2f1eb _public_6f2f1eb

PROC_DECLARE(0x6f2f090, internal_6f2f090, public_6f2f090);
extern "C" NAKED register_t __cdecl internal_6f2f090()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f586f6 @0x6f2f092*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f586f6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [ebp], offset public_6f5a280
        mov eax, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp esi, eax
        mov dword ptr ss : [esp+0x2C], 1
        je public_6f2f116
        lea esp, ss:[esp]
        public_6f2f0d0 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], ebx
        mov cl, byte ptr ds : [eax+0x15]
        add esp, 4
        cmp cl, bl
        jne public_6f2f0f4
        push eax
        call public_6f31980
        add esp, 4
        jmp public_6f2f10f
        public_6f2f0f4 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f2f10a
        lea esp, ss:[esp]
        public_6f2f100 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6f2f100
        public_6f2f10a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6f2f111
        public_6f2f10f : nop
        mov esi, eax
        public_6f2f111 : nop
        cmp esi, dword ptr ss : [ebp+0x14]
        jne public_6f2f0d0
        public_6f2f116 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x20]
        cmp ecx, ebx
        lea esi, ss:[ebp+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        mov byte ptr ss : [esp+0x2C], bl
        mov dword ptr ss : [esp+0x10], eax
        je public_6f2f17c
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f311d0
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ecx]
        jne public_6f2f17c
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, ecx
        jne public_6f2f17c
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        mov ecx, esi
        call public_6f31890
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6f311d0
        jmp public_6f2f1a4
        public_6f2f17c : nop
        cmp eax, edi
        je public_6f2f1a4
        public_6f2f180 : nop
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6f31a00
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_6f311e0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6f2f180
        public_6f2f1a4 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6f57e26
        add ebp, 4
        mov dword ptr ds : [esi+8], ebx
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        add esp, 8
        cmp esi, edi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6f2f1eb
        public_6f2f1d6 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        call public_6f31060
        cmp esi, edi
        jne public_6f2f1d6
        public_6f2f1eb : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6f57e26
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f2f090)
    }
}

#undef public_6f2f0d0
#undef public_6f2f0f4
#undef public_6f2f100
#undef public_6f2f10a
#undef public_6f2f10f
#undef public_6f2f111
#undef public_6f2f116
#undef public_6f2f17c
#undef public_6f2f180
#undef public_6f2f1a4
#undef public_6f2f1d6
#undef public_6f2f1eb
