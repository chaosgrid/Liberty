#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fc970);
CLANG_FORWARD_PROC_SYMBOL(public_66fcec0);
CLANG_FORWARD_JUMP_SYMBOL(public_6700b78);

#define public_66f4059 _public_66f4059
#define public_66f4073 _public_66f4073
#define public_66f40a1 _public_66f40a1
#define public_66f40ab _public_66f40ab
#define public_66f40ed _public_66f40ed
#define public_66f4112 _public_66f4112
#define public_66f4114 _public_66f4114
#define public_66f4150 _public_66f4150
#define public_66f4176 _public_66f4176
#define public_66f4190 _public_66f4190
#define public_66f41c5 _public_66f41c5
#define public_66f41e3 _public_66f41e3
#define public_66f41e8 _public_66f41e8
#define public_66f4203 _public_66f4203

PROC_DECLARE(0x66f4010, internal_66f4010, public_66f4010);
extern "C" NAKED register_t __cdecl internal_66f4010()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6700b78 @0x66f4012*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700b78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        xor ebx, ebx
        cmp esi, ebx
        push edi
        mov dword ptr ss : [esp+0x10], 0x3F800000
        je public_66f40ed
        mov edi, dword ptr ds : [esi]
        call public_66fc970
        cmp eax, ebx
        je public_66f4059
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0xDC]
        mov edi, eax
        public_66f4059 : nop
        lea edx, ss:[esp+0x14]
        push edx
        push edi
        call public_66fcec0
        add esp, 8
        test al, al
        je public_66f4073
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], eax
        public_66f4073 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        je public_66f40ed
        mov dword ptr ss : [esp+0x2C], ebx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
/*FIXUP push offset public_67013f0 @0x66f4085*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push eax
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [ecx]
        test eax, eax
        push esi
        jge public_66f40a1
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        jmp public_66f40ab
        public_66f40a1 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        public_66f40ab : nop
        mov ebp, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xB0]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [ebp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        fstp dword ptr ss : [esp+0x10]
        je public_66f4190
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x2C], ebx
        jmp public_66f4190
        public_66f40ed : nop
        mov ebp, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push ebx
        push esi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_66f4112
        add eax, 0xFFFFFFFC
        jmp public_66f4114
        public_66f4112 : nop
        xor eax, eax
        public_66f4114 : nop
        mov ecx, dword ptr ds : [esi]
        push eax
        push 0xB
        push ebx
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xD
        push ebx
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [esi]
        inc edx
        push edx
        push 0xE
        push ebx
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov edi, dword ptr ss : [ebp+4]
        mov esi, offset public_6701520
        mov eax, 1
        public_66f4150 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push ebx
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_66f4150
        mov edi, dword ptr ss : [ebp+4]
        mov esi, offset public_6701520
        mov eax, 1
        public_66f4176 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_66f4176
        public_66f4190 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x2C], eax
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_67016d8]
        mov edi, dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 5
        mov eax, 0x89
        jp public_66f41e3
        mov esi, offset public_67014f0
        public_66f41c5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_66f41c5
        mov byte ptr ss : [ebp+0x64], 1
        jmp public_66f4203
        public_66f41e3 : nop
        mov esi, offset public_67014d0
        public_66f41e8 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_66f41e8
        mov byte ptr ss : [ebp+0x64], bl
        public_66f4203 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x66f4010)
    }
}

#undef public_66f4059
#undef public_66f4073
#undef public_66f40a1
#undef public_66f40ab
#undef public_66f40ed
#undef public_66f4112
#undef public_66f4114
#undef public_66f4150
#undef public_66f4176
#undef public_66f4190
#undef public_66f41c5
#undef public_66f41e3
#undef public_66f41e8
#undef public_66f4203
