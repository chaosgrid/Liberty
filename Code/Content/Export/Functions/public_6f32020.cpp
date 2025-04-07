#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32020);
CLANG_FORWARD_JUMP_SYMBOL(public_6faea22);

#define public_6f32102 _public_6f32102
#define public_6f32118 _public_6f32118
#define public_6f3212c _public_6f3212c
#define public_6f32130 _public_6f32130

PROC_DECLARE(0x6f32020, internal_6f32020, public_6f32020);
extern "C" NAKED register_t __cdecl internal_6f32020()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6faea22 @0x6f32022*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faea22
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], bl
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], bl
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov byte ptr ss : [esp+0x2E], bl
        mov byte ptr ss : [esp+0x2F], bl
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        lea eax, ss:[esp+0x20]
        push eax
        lea edx, ss:[esp+0xC]
        push edx
        add ecx, 8
        push ecx
        mov byte ptr ss : [esp+0x4C], 1
        call dword ptr ds : [public_6fb34fc]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x54]
        add eax, 0xFFFFC0E9
        add esp, 0xC
        cmp eax, 0xD
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        ja public_6f3212c
/*FIXUP movzx edx, byte ptr ds : [eax+public_6f32174] @0x6f320f4*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6f32168] @0x6f320fb*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_6f32102
  JMPTB cmp eax, 1
  JMPTB mov edx, 2
  JMPTB je public_6f3212c
  JMPTB cmp eax, 2
  JMPTB mov edx, 0
  JMPTB je public_6f32102
  JMPTB cmp eax, 3
  JMPTB mov edx, 2
  JMPTB je public_6f3212c
  JMPTB cmp eax, 4
  JMPTB mov edx, 0
  JMPTB je public_6f32102
  JMPTB cmp eax, 5
  JMPTB mov edx, 2
  JMPTB je public_6f3212c
  JMPTB cmp eax, 6
  JMPTB mov edx, 0
  JMPTB je public_6f32102
  JMPTB cmp eax, 7
  JMPTB mov edx, 2
  JMPTB je public_6f3212c
  JMPTB cmp eax, 8
  JMPTB mov edx, 2
  JMPTB je public_6f3212c
  JMPTB cmp eax, 9
  JMPTB mov edx, 0
  JMPTB je public_6f32102
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 2
  JMPTB je public_6f3212c
  JMPTB cmp eax, 0xB
  JMPTB mov edx, 2
  JMPTB je public_6f3212c
  JMPTB cmp eax, 0xC
  JMPTB mov edx, 2
  JMPTB je public_6f3212c
  JMPTB cmp eax, 0xD
  JMPTB mov edx, 1
  JMPTB je public_6f32118
  JMPTB int 3
        public_6f32102 : nop
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], edx
        mov byte ptr ss : [esp+0x48], 1
        jmp public_6f32130
        public_6f32118 : nop
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        mov byte ptr ss : [esp+0x48], 1
        jmp public_6f32130
        public_6f3212c : nop
        mov byte ptr ss : [esp+0x48], bl
        public_6f32130 : nop
        mov esi, dword ptr ds : [public_6fb3034]
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x40], bl
        call esi
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call esi
        mov ecx, dword ptr ss : [esp+0x38]
        mov al, byte ptr ss : [esp+0x48]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6f32020)
        ASM_EXPORT_ENTRY_FIRST(0x6f32102, public_6f32102)
        ASM_EXPORT_ENTRY(0x6f32118, public_6f32118)
        ASM_EXPORT_ENTRY_LAST(0x6f3212c, public_6f3212c)
    }
}

#undef public_6f32102
#undef public_6f32118
#undef public_6f3212c
#undef public_6f32130

#pragma init_seg(compiler)
extern "C" void const* const public_6f32102 = __AsmFindLabelExport(&internal_6f32020, 0x6f32102);
extern "C" void const* const public_6f32118 = __AsmFindLabelExport(&internal_6f32020, 0x6f32118);
extern "C" void const* const public_6f3212c = __AsmFindLabelExport(&internal_6f32020, 0x6f3212c);
