#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ef30);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62aadc0);
CLANG_FORWARD_PROC_SYMBOL(public_62ac310);
CLANG_FORWARD_PROC_SYMBOL(public_6316ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62aadf0 _public_62aadf0
#define public_62aadf8 _public_62aadf8
#define public_62aae0c _public_62aae0c
#define public_62aae14 _public_62aae14
#define public_62aae20 _public_62aae20
#define public_62aae73 _public_62aae73
#define public_62aaeb0 _public_62aaeb0
#define public_62aaf18 _public_62aaf18
#define public_62aaf20 _public_62aaf20
#define public_62aaf52 _public_62aaf52
#define public_62aaf57 _public_62aaf57
#define public_62aaf68 _public_62aaf68
#define public_62aafe6 _public_62aafe6
#define public_62ab030 _public_62ab030
#define public_62ab056 _public_62ab056
#define public_62ab070 _public_62ab070
#define public_62ab098 _public_62ab098
#define public_62ab0a0 _public_62ab0a0
#define public_62ab0c4 _public_62ab0c4
#define public_62ab0ca _public_62ab0ca
#define public_62ab0ec _public_62ab0ec

PROC_DECLARE(0x62aadc0, internal_62aadc0, public_62aadc0);
extern "C" NAKED register_t __cdecl internal_62aadc0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        push ebx
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp+0x164], eax
        mov eax, dword ptr ss : [ebp+0x88]
        mov ecx, dword ptr ds : [eax+0x88]
        add eax, 0x84
        test ecx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        jne public_62aadf0
        xor edi, edi
        jmp public_62aadf8
        public_62aadf0 : nop
        mov edi, dword ptr ds : [eax+8]
        sub edi, ecx
        sar edi, 4
        public_62aadf8 : nop
        mov ecx, dword ptr ss : [ebp+0x184]
        test ecx, ecx
        lea esi, ss:[ebp+0x180]
        jne public_62aae0c
        xor eax, eax
        jmp public_62aae14
        public_62aae0c : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 4
        public_62aae14 : nop
        cmp eax, edi
        jae public_62aae73
        test edi, edi
        mov eax, edi
        jge public_62aae20
        xor eax, eax
        public_62aae20 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push ecx
        push edx
        mov ecx, esi
        call public_628ef30
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_628f050
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        shl edi, 4
        add edi, ebx
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edi
        call public_6316ac0
        shl eax, 4
        add eax, ebx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], ebx
        public_62aae73 : nop
        mov eax, dword ptr ss : [ebp+0x88]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov byte ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ds : [eax+0x88]
        cmp ecx, dword ptr ds : [eax+0x8C]
        mov dword ptr ss : [esp+0x2C], ecx
        je public_62ab0ec
        lea esp, ss:[esp]
        public_62aaeb0 : nop
        mov dword ptr ss : [esp+0x24], ecx
        mov edi, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edi], 0
        je public_62aaf18
        mov edx, dword ptr ds : [eax+0x44]
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax]
        push 0
        push 0
        push edi
        push ecx
        push edx
        push eax
        call dword ptr ds : [ebx+0x24]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        jne public_62aaf20
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [ebp+0x88]
        add ecx, 8
        mov ebx, 0x100001
        call public_6333e60
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push edi
        push 0x359
/*FIXUP push offset public_639e254 @0x62aaf06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e254
/*FIXUP push offset public_639e2e0 @0x62aaf0b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e2e0
        push ebx
        call dword ptr ds : [edx]
        add esp, 0x18
        jmp public_62aaf20
        public_62aaf18 : nop
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        public_62aaf20 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 4
        cmp ecx, 1
        mov edi, eax
        jae public_62aafe6
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_62aaf52
        sub eax, ecx
        sar eax, 4
        cmp eax, 1
        jbe public_62aaf52
        mov ecx, esi
        call public_6316ac0
        mov ebx, eax
        jmp public_62aaf57
        public_62aaf52 : nop
        mov ebx, 1
        public_62aaf57 : nop
        mov ecx, esi
        call public_6316ac0
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        jns public_62aaf68
        xor eax, eax
        public_62aaf68 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push edx
        mov ecx, esi
        call public_628ef30
        lea ecx, ss:[esp+0x18]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_62ac310
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 0x10
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_628ef30
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_628f050
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        shl ebp, 4
        add ebp, ebx
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], ebp
        call public_6316ac0
        mov ebp, dword ptr ss : [esp+0x10]
        inc eax
        shl eax, 4
        add eax, ebx
        mov dword ptr ds : [esi+4], ebx
        jmp public_62ab0ca
        public_62aafe6 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        cmp ecx, 1
        mov ecx, esi
        jae public_62ab056
        lea edx, ds:[edi+0x10]
        push edx
        push eax
        push edi
        call public_628ef30
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x18]
        push ecx
        sub edx, edi
        sar edx, 4
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_62ac310
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_62ab0c4
        lea esp, ss:[esp]
        public_62ab030 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, edi
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        add edi, 0x10
        cmp edi, eax
        mov dword ptr ds : [edx+0xC], ecx
        jne public_62ab030
        jmp public_62ab0c4
        public_62ab056 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF0
        push eax
        call public_628ef30
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-0x10]
        cmp edi, eax
        je public_62ab098
        nop 
        lea esp, ss:[esp]
        public_62ab070 : nop
        sub eax, 0x10
        sub ecx, 0x10
        cmp eax, edi
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        jne public_62ab070
        mov ebp, dword ptr ss : [esp+0x10]
        public_62ab098 : nop
        lea eax, ds:[edi+0x10]
        cmp edi, eax
        je public_62ab0c4
        nop 
        public_62ab0a0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0x24]
        add edi, 0x10
        cmp edi, eax
        mov dword ptr ds : [ecx+0xC], edx
        jne public_62ab0a0
        public_62ab0c4 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x10
        public_62ab0ca : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [ebp+0x88]
        mov edx, dword ptr ds : [eax+0x8C]
        add ecx, 0x10
        cmp ecx, edx
        mov dword ptr ss : [esp+0x2C], ecx
        jne public_62aaeb0
        public_62ab0ec : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62aadc0)
    }
}

#undef public_62aadf0
#undef public_62aadf8
#undef public_62aae0c
#undef public_62aae14
#undef public_62aae20
#undef public_62aae73
#undef public_62aaeb0
#undef public_62aaf18
#undef public_62aaf20
#undef public_62aaf52
#undef public_62aaf57
#undef public_62aaf68
#undef public_62aafe6
#undef public_62ab030
#undef public_62ab056
#undef public_62ab070
#undef public_62ab098
#undef public_62ab0a0
#undef public_62ab0c4
#undef public_62ab0ca
#undef public_62ab0ec
