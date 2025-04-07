#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273db0);
CLANG_FORWARD_PROC_SYMBOL(public_6275bb0);
CLANG_FORWARD_PROC_SYMBOL(public_63345c0);
CLANG_FORWARD_PROC_SYMBOL(public_63345f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334680);
CLANG_FORWARD_PROC_SYMBOL(public_6334970);
CLANG_FORWARD_JUMP_SYMBOL(public_6392b18);

#define public_6277cb6 _public_6277cb6
#define public_6277cb8 _public_6277cb8
#define public_6277cc6 _public_6277cc6
#define public_6277cd1 _public_6277cd1
#define public_6277ced _public_6277ced

PROC_DECLARE(0x6277c70, internal_6277c70, public_6277c70);
extern "C" NAKED register_t __cdecl internal_6277c70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392b18 @0x6277c72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392b18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_6275bb0
        lea ecx, ss:[esp+0xC]
        call public_63345c0
        mov ebx, dword ptr ss : [esp+0x3C]
        cmp ebx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], 0
        je public_6277cb6
        push ebx
        lea ecx, ss:[esp+0x10]
        call public_6334970
        public_6277cb6 : nop
        xor edi, edi
        public_6277cb8 : nop
        mov ecx, dword ptr ds : [esi+0x1A8]
        test ecx, ecx
        jne public_6277cc6
        xor eax, eax
        jmp public_6277cd1
        public_6277cc6 : nop
        mov eax, dword ptr ds : [esi+0x1AC]
        sub eax, ecx
        sar eax, 2
        public_6277cd1 : nop
        cmp edi, eax
        jge public_6277ced
        mov ecx, dword ptr ds : [esi+0x1A8]
        mov ecx, dword ptr ds : [ecx+edi*4]
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        push ebx
        call public_6273db0
        inc edi
        jmp public_6277cb8
        public_6277ced : nop
        lea ecx, ss:[esp+0xC]
        call public_6334680
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_63345f0
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x6277c70)
    }
}

#undef public_6277cb6
#undef public_6277cb8
#undef public_6277cc6
#undef public_6277cd1
#undef public_6277ced
