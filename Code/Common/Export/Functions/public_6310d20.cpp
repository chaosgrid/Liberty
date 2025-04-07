#include "Common-PCH.h"


#define public_6310d71 _public_6310d71
#define public_6310d75 _public_6310d75
#define public_6310d99 _public_6310d99
#define public_6310da0 _public_6310da0
#define public_6310da4 _public_6310da4
#define public_6310db7 _public_6310db7
#define public_6310dbe _public_6310dbe
#define public_6310de1 _public_6310de1
#define public_6310dec _public_6310dec
#define public_6310e2c _public_6310e2c
#define public_6310e31 _public_6310e31
#define public_6310e4f _public_6310e4f
#define public_6310e9c _public_6310e9c
#define public_6310ebd _public_6310ebd

PROC_DECLARE(0x6310d20, internal_6310d20, public_6310d20);
extern "C" NAKED register_t __cdecl internal_6310d20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x108
        push ebx
        push ebp
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x1564]
        test al, al
        push esi
        push edi
        je public_6310ebd
        mov eax, dword ptr ds : [ebx+0x145C]
        test eax, eax
        lea edi, ds:[ebx+0x1464]
        mov dword ptr ss : [esp+0x10], edi
        mov byte ptr ds : [edi], 0
        je public_6310e9c
        movzx ecx, byte ptr ds : [eax+2]
        xor ebp, ebp
        test ecx, ecx
        jle public_6310e9c
        xor esi, esi
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6310d75
        public_6310d71 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_6310d75 : nop
        test eax, eax
        je public_6310e2c
        cmp ebp, ecx
        jae public_6310dec
        mov eax, dword ptr ds : [ebx+0x1460]
        movzx ecx, byte ptr ds : [eax+esi]
        add eax, esi
        cmp ecx, 3
        ja public_6310db7
/*FIXUP jmp dword ptr ds : [ecx*4+public_6310ee4] @0x6310d92*/
  JMPTB cmp ecx, 0
  JMPTB je public_6310d99
  JMPTB cmp ecx, 1
  JMPTB je public_6310da0
  JMPTB cmp ecx, 2
  JMPTB je public_6310dbe
  JMPTB cmp ecx, 3
  JMPTB je public_6310de1
  JMPTB int 3
        public_6310d99 : nop
        movzx eax, byte ptr ds : [eax+1]
        push eax
        jmp public_6310da4
        public_6310da0 : nop
        mov ecx, dword ptr ds : [eax+1]
        push ecx
/*FIXUP public_6310da4 : nop
        push offset public_63a362c @0x6310da4*/
  FIXUP public_6310da4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a362c
/*FIXUP push offset public_658e900 @0x6310da9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e900
        call dword ptr ds : [public_639931c]
        add esp, 0xC
        public_6310db7 : nop
        mov edx, offset public_658e900
        jmp public_6310e31
        public_6310dbe : nop
        fld dword ptr ds : [eax+1]
        sub esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_63a3628 @0x6310dc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3628
/*FIXUP push offset public_658e900 @0x6310dcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e900
        call dword ptr ds : [public_639931c]
        add esp, 0x10
        mov edx, offset public_658e900
        jmp public_6310e31
        public_6310de1 : nop
        mov edx, dword ptr ds : [eax+1]
        add edx, dword ptr ds : [ebx+0x1450]
        jmp public_6310e31
        public_6310dec : nop
        movzx edx, word ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x1450]
        mov eax, dword ptr ds : [ebx+0x1454]
        push ebp
        add edx, ecx
        push edx
        movzx edx, word ptr ds : [eax]
        add edx, ecx
        push edx
        lea eax, ss:[esp+0x24]
/*FIXUP push offset public_63a35f8 @0x6310e09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f8
        push eax
        call dword ptr ds : [public_639931c]
        add esp, 0x14
        push 0
/*FIXUP push offset public_63a35f0 @0x6310e1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f0
        lea ecx, ss:[esp+0x20]
        push ecx
        push 0
        call dword ptr ds : [public_6399394]
        public_6310e2c : nop
        mov edx, offset public_63997b0
        public_6310e31 : nop
        test esi, esi
        jle public_6310e4f
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov ax, word ptr ds : [public_63a3624]
        dec edi
        mov word ptr ds : [edi], ax
        mov cl, byte ptr ds : [public_63a3626]
        mov byte ptr ds : [edi+2], cl
        public_6310e4f : nop
        xor eax, eax
        mov edi, edx
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov edi, dword ptr ss : [esp+0x10]
        repne scasb
        dec edi
        mov ecx, edx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+0x145C]
        mov esi, dword ptr ss : [esp+0x14]
        movzx ecx, byte ptr ds : [eax+2]
        mov edi, dword ptr ss : [esp+0x10]
        inc ebp
        add esi, 5
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x14], esi
        jl public_6310d71
        public_6310e9c : nop
        push 0x100
        push edi
/*FIXUP push offset public_63fcf98 @0x6310ea2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fcf98
        call dword ptr ds : [public_6399340]
        mov eax, offset public_63fcf98
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6310ebd : nop
        lea esi, ds:[ebx+0xC28]
        push 0x400
        add ebx, 0x828
        push ebx
        push esi
        call dword ptr ds : [public_6399340]
        add esp, 0xC
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6310d20)
        ASM_EXPORT_ENTRY_FIRST(0x6310d99, public_6310d99)
        ASM_EXPORT_ENTRY(0x6310da0, public_6310da0)
        ASM_EXPORT_ENTRY(0x6310dbe, public_6310dbe)
        ASM_EXPORT_ENTRY_LAST(0x6310de1, public_6310de1)
    }
}

#undef public_6310d71
#undef public_6310d75
#undef public_6310d99
#undef public_6310da0
#undef public_6310da4
#undef public_6310db7
#undef public_6310dbe
#undef public_6310de1
#undef public_6310dec
#undef public_6310e2c
#undef public_6310e31
#undef public_6310e4f
#undef public_6310e9c
#undef public_6310ebd

#pragma init_seg(compiler)
extern "C" void const* const public_6310d99 = __AsmFindLabelExport(&internal_6310d20, 0x6310d99);
extern "C" void const* const public_6310da0 = __AsmFindLabelExport(&internal_6310d20, 0x6310da0);
extern "C" void const* const public_6310dbe = __AsmFindLabelExport(&internal_6310d20, 0x6310dbe);
extern "C" void const* const public_6310de1 = __AsmFindLabelExport(&internal_6310d20, 0x6310de1);
