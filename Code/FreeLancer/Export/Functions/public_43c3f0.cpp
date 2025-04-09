#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c3f0);
CLANG_FORWARD_PROC_SYMBOL(public_43cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b949b);

#define public_43c415 _public_43c415
#define public_43c41e _public_43c41e
#define public_43c420 _public_43c420
#define public_43c42d _public_43c42d
#define public_43c44d _public_43c44d
#define public_43c459 _public_43c459
#define public_43c47f _public_43c47f
#define public_43c481 _public_43c481
#define public_43c4a7 _public_43c4a7
#define public_43c4b1 _public_43c4b1
#define public_43c4cb _public_43c4cb
#define public_43c4ce _public_43c4ce

PROC_DECLARE(0x43c3f0, internal_43c3f0, public_43c3f0);
extern "C" NAKED register_t __cdecl internal_43c3f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b949b @0x43c3f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b949b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ebx]
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        xor eax, eax
        public_43c415 : nop
        test eax, eax
        jne public_43c41e
        mov eax, dword ptr ds : [esi+4]
        jmp public_43c420
        public_43c41e : nop
        mov eax, dword ptr ds : [eax]
        public_43c420 : nop
        test eax, eax
        je public_43c42d
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx], edx
        jne public_43c415
        mov edi, eax
        public_43c42d : nop
        test edi, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_43c459
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        je public_43c44d
        mov ecx, edi
        call dword ptr ds : [public_5c6148]
        push edi
        call public_5b7e1d
        add esp, 4
        public_43c44d : nop
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_43cf80
        public_43c459 : nop
        push 0x60
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_43c47f
        mov ecx, eax
        call dword ptr ds : [public_5c6150]
        mov edi, eax
        jmp public_43c481
        public_43c47f : nop
        xor edi, edi
        public_43c481 : nop
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6174]
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_43c4a7
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_43c4a7
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_43c4b1
        public_43c4a7 : nop
        push 0xC
        call public_5b7e84
        add esp, 4
        public_43c4b1 : nop
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_43c4cb
        mov dword ptr ds : [ecx], eax
        jmp public_43c4ce
        public_43c4cb : nop
        mov dword ptr ds : [esi+4], eax
        public_43c4ce : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x43c3f0)
    }
}

#undef public_43c415
#undef public_43c41e
#undef public_43c420
#undef public_43c42d
#undef public_43c44d
#undef public_43c459
#undef public_43c47f
#undef public_43c481
#undef public_43c4a7
#undef public_43c4b1
#undef public_43c4cb
#undef public_43c4ce
