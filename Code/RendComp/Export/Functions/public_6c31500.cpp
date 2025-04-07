#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c31160);
CLANG_FORWARD_PROC_SYMBOL(public_6c31280);
CLANG_FORWARD_PROC_SYMBOL(public_6c31500);
CLANG_FORWARD_PROC_SYMBOL(public_6c34f34);

#define public_6c31547 _public_6c31547
#define public_6c3155b _public_6c3155b
#define public_6c31569 _public_6c31569
#define public_6c31576 _public_6c31576
#define public_6c31582 _public_6c31582
#define public_6c31589 _public_6c31589
#define public_6c315a0 _public_6c315a0
#define public_6c315b3 _public_6c315b3
#define public_6c315b8 _public_6c315b8
#define public_6c315bd _public_6c315bd
#define public_6c315c2 _public_6c315c2
#define public_6c315c5 _public_6c315c5
#define public_6c315d3 _public_6c315d3
#define public_6c316d7 _public_6c316d7
#define public_6c316e0 _public_6c316e0
#define public_6c316f5 _public_6c316f5
#define public_6c316ff _public_6c316ff
#define public_6c31716 _public_6c31716

PROC_DECLARE(0x6c31500, internal_6c31500, public_6c31500);
extern "C" NAKED register_t __cdecl internal_6c31500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        push ebp
        push eax
        mov ebp, ecx
        call public_6c31160
        test al, al
        mov byte ptr ss : [esp+7], al
        je public_6c31716
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [ecx+0x34]
        push ebx
        movzx ebx, word ptr ds : [eax+0xC]
        push esi
        mov edx, ebx
        mov esi, 0xC
        xor ecx, ecx
        and edx, esi
        cmp dl, 0xC
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6c31547
        mov dword ptr ss : [esp+0x14], 0x1C
        jmp public_6c31569
        public_6c31547 : nop
        mov edx, ebx
        and edx, 4
        cmp dl, 4
        jne public_6c3155b
        mov dword ptr ss : [esp+0x14], 0x10
        jmp public_6c31569
        public_6c3155b : nop
        mov edx, ebx
        and edx, 2
        cmp dl, 2
        jne public_6c31569
        mov dword ptr ss : [esp+0x14], esi
        public_6c31569 : nop
        test bl, 0x10
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6c31576
        mov dword ptr ss : [esp+0x1C], esi
        public_6c31576 : nop
        xor edi, edi
        test bl, 0x40
        je public_6c31582
        mov edi, 4
        public_6c31582 : nop
        test bl, bl
        jns public_6c31589
        add edi, 4
        public_6c31589 : nop
        mov edx, ebx
        shr edx, 8
        xor esi, esi
        and edx, 0xF
        jle public_6c315d3
        mov ecx, 0x10
        mov dword ptr ss : [esp+0x18], edx
        mov edi, edi
        public_6c315a0 : nop
        mov edx, ebx
        shr edx, cl
        and edx, 3
        cmp edx, 3
        ja public_6c315c5
/*FIXUP jmp dword ptr ds : [edx*4+public_6c31720] @0x6c315ac*/
  JMPTB cmp edx, 0
  JMPTB je public_6c315b8
  JMPTB cmp edx, 1
  JMPTB je public_6c315bd
  JMPTB cmp edx, 2
  JMPTB je public_6c315c2
  JMPTB cmp edx, 3
  JMPTB je public_6c315b3
  JMPTB int 3
        public_6c315b3 : nop
        add esi, 4
        jmp public_6c315c5
        public_6c315b8 : nop
        add esi, 8
        jmp public_6c315c5
        public_6c315bd : nop
        add esi, 0xC
        jmp public_6c315c5
        public_6c315c2 : nop
        add esi, 0x10
        public_6c315c5 : nop
        mov edx, dword ptr ss : [esp+0x18]
        add ecx, 2
        dec edx
        mov dword ptr ss : [esp+0x18], edx
        jne public_6c315a0
        public_6c315d3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        movzx edx, word ptr ds : [eax+0xA]
        mov ebx, dword ptr ss : [esp+0x14]
        add esi, edi
        add esi, ecx
        movzx ecx, word ptr ds : [eax+8]
        lea ecx, ds:[ecx+ecx*2]
        lea ecx, ds:[edx+ecx*2]
        mov edx, dword ptr ss : [ebp+0x1C]
        movzx edx, word ptr ds : [edx+8]
        add esi, ebx
        imul edx, esi
        add eax, edx
        lea edi, ds:[eax+ecx*2+0x10]
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov ecx, ebp
        call public_6c31280
        add eax, edi
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [public_6c37d70]
        mov eax, 1
        xor ebx, ebx
        test al, cl
        jne public_6c316d7
        mov dl, cl
        or dl, al
        mov ecx, 0xC
        mov byte ptr ds : [public_6c37d70], dl
        mov dword ptr ds : [public_6c37ce0], eax
        mov eax, 8
        mov dword ptr ds : [public_6c37ce8], ecx
        mov dword ptr ds : [public_6c37cf0], ecx
        mov edx, 0x10
        mov dword ptr ds : [public_6c37d00], ecx
        mov ecx, 4
/*FIXUP push offset _public_6c2e3e0 @0x6c3165d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c2e3e0
        mov dword ptr ds : [public_6c37ce4], 0xE
        mov dword ptr ds : [public_6c37cec], 0x800
        mov dword ptr ds : [public_6c37cf4], 0x30
        mov dword ptr ds : [public_6c37cf8], eax
        mov dword ptr ds : [public_6c37cfc], edx
        mov dword ptr ds : [public_6c37d04], 2
        mov dword ptr ds : [public_6c37d08], 0x100
        mov dword ptr ds : [public_6c37d0c], eax
        mov dword ptr ds : [public_6c37d10], ecx
        mov dword ptr ds : [public_6c37d14], 0x200
        mov dword ptr ds : [public_6c37d18], eax
        mov dword ptr ds : [public_6c37d1c], edx
        mov dword ptr ds : [public_6c37d20], 0x40
        mov dword ptr ds : [public_6c37d24], ecx
        call public_6c34f34
        add esp, 4
        public_6c316d7 : nop
        xor ecx, ecx
        mov eax, offset public_6c37ce0
        mov edi, edi
        public_6c316e0 : nop
        mov edx, dword ptr ss : [esp+0x24]
        cmp edx, dword ptr ds : [eax]
        je public_6c316f5
        add eax, 0xC
        inc ecx
        cmp eax, offset public_6c37d28
        jl public_6c316e0
        jmp public_6c316ff
        public_6c316f5 : nop
        lea eax, ds:[ecx+ecx*2]
        mov ebx, dword ptr ds : [eax*4+public_6c37ce8]
        public_6c316ff : nop
        mov al, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], esi
        mov ecx, dword ptr ss : [ebp+0x1C]
        movzx edx, word ptr ds : [ecx+0xA]
        mov dword ptr ds : [edi+0x10], edx
        pop edi
        pop esi
        pop ebx
        public_6c31716 : nop
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6c31500)
        ASM_EXPORT_ENTRY_FIRST(0x6c315b3, public_6c315b3)
        ASM_EXPORT_ENTRY(0x6c315b8, public_6c315b8)
        ASM_EXPORT_ENTRY(0x6c315bd, public_6c315bd)
        ASM_EXPORT_ENTRY_LAST(0x6c315c2, public_6c315c2)
    }
}

#undef public_6c31547
#undef public_6c3155b
#undef public_6c31569
#undef public_6c31576
#undef public_6c31582
#undef public_6c31589
#undef public_6c315a0
#undef public_6c315b3
#undef public_6c315b8
#undef public_6c315bd
#undef public_6c315c2
#undef public_6c315c5
#undef public_6c315d3
#undef public_6c316d7
#undef public_6c316e0
#undef public_6c316f5
#undef public_6c316ff
#undef public_6c31716

#pragma init_seg(compiler)
extern "C" void const* const public_6c315b3 = __AsmFindLabelExport(&internal_6c31500, 0x6c315b3);
extern "C" void const* const public_6c315b8 = __AsmFindLabelExport(&internal_6c31500, 0x6c315b8);
extern "C" void const* const public_6c315bd = __AsmFindLabelExport(&internal_6c31500, 0x6c315bd);
extern "C" void const* const public_6c315c2 = __AsmFindLabelExport(&internal_6c31500, 0x6c315c2);
