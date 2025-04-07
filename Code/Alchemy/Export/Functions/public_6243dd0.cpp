#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6212db0);
CLANG_FORWARD_PROC_SYMBOL(public_62436a0);
CLANG_FORWARD_PROC_SYMBOL(public_6243c40);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_PROC_SYMBOL(public_6246194);
CLANG_FORWARD_PROC_SYMBOL(public_62463e2);
CLANG_FORWARD_JUMP_SYMBOL(public_624a994);

#define public_6243e06 _public_6243e06
#define public_6243e2a _public_6243e2a
#define public_6243e2e _public_6243e2e
#define public_6243e33 _public_6243e33
#define public_6243e8c _public_6243e8c
#define public_6243e9e _public_6243e9e
#define public_6243ed4 _public_6243ed4
#define public_6243ed6 _public_6243ed6
#define public_6243f45 _public_6243f45
#define public_6243f47 _public_6243f47
#define public_6243f72 _public_6243f72
#define public_6243fa8 _public_6243fa8
#define public_6243fc7 _public_6243fc7
#define public_6243fcd _public_6243fcd

PROC_DECLARE(0x6243dd0, internal_6243dd0, public_6243dd0);
extern "C" NAKED register_t __cdecl internal_6243dd0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a994 @0x6243dd8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a994
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp ecx, 8
        jne public_6243fa8
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_6243e06 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6243e2e
        test cl, cl
        je public_6243e2a
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6243e2e
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6243e06
        public_6243e2a : nop
        xor eax, eax
        jmp public_6243e33
        public_6243e2e : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6243e33 : nop
        cmp eax, edi
        jne public_6243fa8
        push 0x34
        call public_624612c
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], ebx
        cmp ebx, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_6243f45
        push ebp
/*FIXUP push offset _public_62084b0 @0x6243e58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62084b0
/*FIXUP push offset _public_6243c40 @0x6243e5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6243c40
        lea edi, ds:[ebx+0xC]
        push 9
        push 4
        push edi
        mov dword ptr ds : [ebx], offset public_624fb44
        mov dword ptr ds : [ebx+4], 0x435
        call public_62463e2
        mov byte ptr ss : [esp+0x24], 1
        mov dword ptr ds : [ebx], offset public_624fb10
        mov ebp, offset public_62575e8
        public_6243e8c : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6243e9e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6243e9e : nop
        mov edx, dword ptr ss : [ebp]
        push 0x20
        mov dword ptr ss : [esp+0x14], edx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov byte ptr ss : [esp+0x24], 2
        je public_6243ed4
        mov ecx, esi
        call public_6212db0
        mov dword ptr ds : [esi], offset public_624bac8
        mov dword ptr ds : [esi+0x1C], 1
        jmp public_6243ed6
        public_6243ed4 : nop
        xor esi, esi
        public_6243ed6 : nop
        mov dword ptr ss : [esp+0x2C], 0
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x24], 3
        call public_6209fd0
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        call public_6209ad0
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [esi]
        add esp, 8
        push eax
        push 0
        push esi
        call dword ptr ds : [edx+0x14]
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ds : [edi], esi
        mov byte ptr ss : [esp+0x24], 1
        call public_6209fd0
        add ebp, 4
        add edi, 4
        cmp ebp, offset public_625760c
        jl public_6243e8c
        push ebx
        call public_62436a0
        mov dword ptr ds : [ebx], offset public_624bbb8
        mov dword ptr ds : [ebx+0x30], 1
        mov esi, ebx
        pop ebp
        jmp public_6243f47
        public_6243f45 : nop
        xor esi, esi
        public_6243f47 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        jne public_6243f72
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        public_6243f72 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [edx+0x30]
        mov edi, eax
        test edi, edi
        je public_6243fc7
/*FIXUP push offset _public_62084b0 @0x6243f83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62084b0
        push 9
        lea ecx, ds:[esi+0xC]
        push 4
        push ecx
        call public_6246194
        push esi
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x34]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edx], eax
        jmp public_6243fcd
        public_6243fa8 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        public_6243fc7 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx], esi
        public_6243fcd : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6243dd0)
    }
}

#undef public_6243e06
#undef public_6243e2a
#undef public_6243e2e
#undef public_6243e33
#undef public_6243e8c
#undef public_6243e9e
#undef public_6243ed4
#undef public_6243ed6
#undef public_6243f45
#undef public_6243f47
#undef public_6243f72
#undef public_6243fa8
#undef public_6243fc7
#undef public_6243fcd
