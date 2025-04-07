#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0170);
CLANG_FORWARD_PROC_SYMBOL(public_62a0270);
CLANG_FORWARD_PROC_SYMBOL(public_62a02d0);
CLANG_FORWARD_PROC_SYMBOL(public_62a17f0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1a50);
CLANG_FORWARD_PROC_SYMBOL(public_62a9420);
CLANG_FORWARD_PROC_SYMBOL(public_62f1ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393f9b);

#define public_62a9450 _public_62a9450
#define public_62a948b _public_62a948b
#define public_62a948d _public_62a948d
#define public_62a94b9 _public_62a94b9
#define public_62a94cb _public_62a94cb

PROC_DECLARE(0x62a9420, internal_62a9420, public_62a9420);
extern "C" NAKED register_t __cdecl internal_62a9420()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6393f9b @0x62a9428*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393f9b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        push edi
        mov ebx, ecx
        je public_62a94cb
        lea ecx, ds:[ecx]
        public_62a9450 : nop
        mov ecx, dword ptr ds : [ebx+0x88]
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        push edx
        call public_62f1ea0
        push 0x34
        mov edi, eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_62a948b
        push ebx
        push edi
        mov ecx, eax
        call public_62a0170
        mov edi, eax
        jmp public_62a948d
        public_62a948b : nop
        xor edi, edi
        public_62a948d : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_62a0270
        fld dword ptr ds : [esi+0xC]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jp public_62a94b9
        push 3
        mov ecx, edi
        call public_62a02d0
        public_62a94b9 : nop
        push edi
        lea ecx, ds:[ebx+0x144]
        call public_62a17f0
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_62a9450
        public_62a94cb : nop
        lea ecx, ds:[ebx+0x144]
        call public_62a1a50
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62a9420)
    }
}

#undef public_62a9450
#undef public_62a948b
#undef public_62a948d
#undef public_62a94b9
#undef public_62a94cb
