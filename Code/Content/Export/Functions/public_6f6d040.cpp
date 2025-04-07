#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f67090);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d040);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafe48);

#define public_6f6d0f1 _public_6f6d0f1
#define public_6f6d120 _public_6f6d120
#define public_6f6d12d _public_6f6d12d
#define public_6f6d140 _public_6f6d140
#define public_6f6d14b _public_6f6d14b
#define public_6f6d14d _public_6f6d14d
#define public_6f6d160 _public_6f6d160
#define public_6f6d16d _public_6f6d16d
#define public_6f6d16f _public_6f6d16f
#define public_6f6d178 _public_6f6d178
#define public_6f6d183 _public_6f6d183
#define public_6f6d197 _public_6f6d197
#define public_6f6d1a1 _public_6f6d1a1

PROC_DECLARE(0x6f6d040, internal_6f6d040, public_6f6d040);
extern "C" NAKED register_t __cdecl internal_6f6d040()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafe48 @0x6f6d048*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafe48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        test eax, 0x3FFFFFFF
        je public_6f6d1a1
        lea ecx, ss:[esp+0x28]
        push ecx
        xor ebx, ebx
        push eax
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [public_6fb362c]
        lea edx, ss:[esp+0x30]
        push edx
        call public_6f75f30
        add esp, 0xC
        cmp eax, ebx
        je public_6f6d1a1
        mov ecx, dword ptr ds : [esi]
        push ecx
        mov ecx, eax
        call public_6f73930
        cmp eax, ebx
        je public_6f6d1a1
        mov eax, dword ptr ds : [eax+0x154]
        cmp eax, 0xFFFFFFFF
        je public_6f6d1a1
        mov dl, byte ptr ss : [esp+0x28]
        push edi
        mov byte ptr ss : [esp+0xC], dl
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x2C], ebx
        call public_6f66220
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        cmp eax, ecx
        mov edi, eax
        je public_6f6d197
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        public_6f6d0f1 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x34]
        push eax
        mov dword ptr ss : [esp+0x38], edx
        call public_6f49bc0
        add esp, 4
        cmp eax, ebx
        je public_6f6d183
        mov esi, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [public_6fd1cac]
        mov ecx, dword ptr ds : [public_6fd1cb0]
        cmp eax, ecx
        je public_6f6d183
        mov edx, dword ptr ss : [ebp]
        public_6f6d120 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d12d
        add eax, 0x14
        cmp eax, ecx
        jne public_6f6d120
        jmp public_6f6d183
        public_6f6d12d : nop
        cmp eax, ecx
        je public_6f6d183
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        je public_6f6d14b
        nop 
        lea esp, ss:[esp]
        public_6f6d140 : nop
        cmp dword ptr ds : [ecx], ebx
        je public_6f6d14d
        add ecx, 4
        cmp ecx, edx
        jne public_6f6d140
        public_6f6d14b : nop
        mov ecx, edx
        public_6f6d14d : nop
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jne public_6f6d178
        mov ecx, dword ptr ds : [eax+8]
        mov eax, edx
        cmp ecx, eax
        je public_6f6d16f
        lea ecx, ds:[ecx]
        public_6f6d160 : nop
        cmp dword ptr ds : [ecx], esi
        je public_6f6d16d
        add ecx, 4
        cmp ecx, eax
        jne public_6f6d160
        jmp public_6f6d16f
        public_6f6d16d : nop
        mov eax, ecx
        public_6f6d16f : nop
        cmp eax, edx
        setne al
        cmp al, bl
        je public_6f6d183
        public_6f6d178 : nop
        mov ecx, dword ptr ds : [edi]
        push ecx
        call public_6f67090
        add esp, 4
        public_6f6d183 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 4
        cmp edi, eax
        jne public_6f6d0f1
        mov eax, dword ptr ss : [esp+0x14]
        pop ebp
        public_6f6d197 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        public_6f6d1a1 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f6d040)
    }
}

#undef public_6f6d0f1
#undef public_6f6d120
#undef public_6f6d12d
#undef public_6f6d140
#undef public_6f6d14b
#undef public_6f6d14d
#undef public_6f6d160
#undef public_6f6d16d
#undef public_6f6d16f
#undef public_6f6d178
#undef public_6f6d183
#undef public_6f6d197
#undef public_6f6d1a1
