#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dc50);
CLANG_FORWARD_PROC_SYMBOL(public_634dd60);
CLANG_FORWARD_PROC_SYMBOL(public_634ded0);
CLANG_FORWARD_PROC_SYMBOL(public_634fec0);
CLANG_FORWARD_PROC_SYMBOL(public_634ffa0);
CLANG_FORWARD_PROC_SYMBOL(public_6350020);
CLANG_FORWARD_PROC_SYMBOL(public_6350350);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_JUMP_SYMBOL(public_6397f70);

#define public_634ddae _public_634ddae
#define public_634ddc6 _public_634ddc6
#define public_634ddd0 _public_634ddd0
#define public_634ddda _public_634ddda
#define public_634dde2 _public_634dde2

PROC_DECLARE(0x634dd60, internal_634dd60, public_634dd60);
extern "C" NAKED register_t __cdecl internal_634dd60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6397f70 @0x634dd62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397f70
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_63a55e0
        mov eax, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [eax+0x18]
        dec dword ptr ds : [eax+0x6C]
        inc dword ptr ds : [eax+0x74]
        mov edi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        test ah, 0xC
        mov dword ptr ss : [esp+0x1C], 0
        je public_634ddae
        push esi
        call public_6350350
        add esp, 4
        public_634ddae : nop
        mov eax, dword ptr ds : [esi+0x14]
        shl eax, 0xA
        sar eax, 0x1C
        add eax, 0xFFFFFFFE
        cmp eax, 3
        ja public_634dde2
/*FIXUP jmp dword ptr ds : [eax*4+public_634de54] @0x634ddbf*/
  JMPTB cmp eax, 0
  JMPTB je public_634ddda
  JMPTB cmp eax, 1
  JMPTB je public_634ddc6
  JMPTB cmp eax, 2
  JMPTB je public_634ddd0
  JMPTB cmp eax, 3
  JMPTB je public_634ddd0
  JMPTB int 3
        public_634ddc6 : nop
        push esi
        mov ecx, edi
        call public_634fec0
        jmp public_634dde2
        public_634ddd0 : nop
        push esi
        mov ecx, edi
        call public_6350020
        jmp public_634dde2
        public_634ddda : nop
        push esi
        mov ecx, edi
        call public_634ffa0
        public_634dde2 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov edi, dword ptr ds : [eax+0x80]
        mov ebp, dword ptr ds : [edi]
        lea ebx, ds:[esi+0x18]
        mov ecx, ebx
        call public_634ded0
        push eax
        mov ecx, edi
        call dword ptr ss : [ebp+0x20]
        mov eax, dword ptr ds : [esi+0x44]
        mov edi, dword ptr ds : [eax+0x80]
        mov ebp, dword ptr ds : [edi]
        lea ecx, ds:[esi+0x34]
        call public_634ded0
        push eax
        mov ecx, edi
        call dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi], offset public_63a55a4
/*FIXUP push offset _public_634dc50 @0x634de24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_634dc50
        push 2
        push 0x1C
        push ebx
        mov dword ptr ss : [esp+0x2C], 1
        call public_6391dfc
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi], offset public_63a55b8
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x634dd60)
        ASM_EXPORT_ENTRY_FIRST(0x634ddc6, public_634ddc6)
        ASM_EXPORT_ENTRY(0x634ddd0, public_634ddd0)
        ASM_EXPORT_ENTRY_LAST(0x634ddda, public_634ddda)
    }
}

#undef public_634ddae
#undef public_634ddc6
#undef public_634ddd0
#undef public_634ddda
#undef public_634dde2

#pragma init_seg(compiler)
extern "C" void const* const public_634ddc6 = __AsmFindLabelExport(&internal_634dd60, 0x634ddc6);
extern "C" void const* const public_634ddd0 = __AsmFindLabelExport(&internal_634dd60, 0x634ddd0);
extern "C" void const* const public_634ddda = __AsmFindLabelExport(&internal_634dd60, 0x634ddda);
