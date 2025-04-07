#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62695c0);
CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63961c8);

#define public_6309e8a _public_6309e8a
#define public_6309ea6 _public_6309ea6
#define public_6309eba _public_6309eba
#define public_6309ef7 _public_6309ef7
#define public_6309f10 _public_6309f10
#define public_6309f42 _public_6309f42
#define public_6309f47 _public_6309f47
#define public_6309f58 _public_6309f58
#define public_6309fd5 _public_6309fd5
#define public_630a010 _public_630a010
#define public_630a029 _public_630a029
#define public_630a040 _public_630a040
#define public_630a055 _public_630a055
#define public_630a060 _public_630a060
#define public_630a077 _public_630a077
#define public_630a07d _public_630a07d
#define public_630a097 _public_630a097

PROC_DECLARE(0x6309e40, internal_6309e40, public_6309e40);
extern "C" NAKED register_t __cdecl internal_6309e40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63961c8 @0x6309e42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63961c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov al, byte ptr ss : [esp+0x1C]
        push ebx
        mov ebx, ecx
        push ebp
        xor ecx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [ebx], al
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], ecx
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x10], eax
        jbe public_6309ef7
        jge public_6309e8a
        xor eax, eax
        public_6309e8a : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        je public_6309eba
        public_6309ea6 : nop
        push esi
        push edi
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebp
        jne public_6309ea6
        public_6309eba : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        mov ecx, ebx
        call public_628f050
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x18]
        shl eax, 5
        add eax, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_62695c0
        shl eax, 5
        add eax, esi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], esi
        public_6309ef7 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_630a097
        lea esp, ss:[esp]
        public_6309f10 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        sub edx, ebp
        sar edx, 5
        cmp edx, 1
        lea esi, ds:[ecx+8]
        jae public_6309fd5
        mov ecx, ebx
        call public_62695c0
        cmp eax, 1
        jbe public_6309f42
        mov ecx, ebx
        call public_62695c0
        mov edi, eax
        jmp public_6309f47
        public_6309f42 : nop
        mov edi, 1
        public_6309f47 : nop
        mov ecx, ebx
        call public_62695c0
        mov esi, eax
        add esi, edi
        mov eax, esi
        jns public_6309f58
        xor eax, eax
        public_6309f58 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [ebx+4]
        push edi
        push ebp
        push eax
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ss : [esp+0x10]
        add ecx, 8
        push ecx
        push 1
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], eax
        call public_626a5b0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+8]
        add edx, 0x20
        push edx
        push eax
        push ebp
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_628f050
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        shl esi, 5
        add esi, edi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], esi
        call public_62695c0
        inc eax
        shl eax, 5
        add eax, edi
        mov dword ptr ds : [ebx+4], edi
        jmp public_630a07d
        public_6309fd5 : nop
        mov ecx, ebp
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, 1
        mov ecx, ebx
        jae public_630a029
        lea edx, ss:[ebp+0x20]
        push edx
        push ebp
        push ebp
        call public_626a570
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        push esi
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, ebx
        call public_626a5b0
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_630a077
        public_630a010 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        lea esi, ds:[edx+8]
        rep movsd
        jne public_630a010
        jmp public_630a077
        public_630a029 : nop
        push ebp
        push ebp
        lea eax, ss:[ebp-0x20]
        push eax
        call public_626a570
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_630a055
        mov edi, edi
        public_630a040 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_630a040
        public_630a055 : nop
        lea eax, ss:[ebp+0x20]
        cmp ebp, eax
        je public_630a077
        lea esp, ss:[esp]
        public_630a060 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        lea esi, ds:[edx+8]
        rep movsd
        jne public_630a060
        public_630a077 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x20
        public_630a07d : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6309f10
        public_630a097 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6309e40)
    }
}

#undef public_6309e8a
#undef public_6309ea6
#undef public_6309eba
#undef public_6309ef7
#undef public_6309f10
#undef public_6309f42
#undef public_6309f47
#undef public_6309f58
#undef public_6309fd5
#undef public_630a010
#undef public_630a029
#undef public_630a040
#undef public_630a055
#undef public_630a060
#undef public_630a077
#undef public_630a07d
#undef public_630a097
