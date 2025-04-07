#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68065d0);
CLANG_FORWARD_PROC_SYMBOL(public_6808fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6809000);
CLANG_FORWARD_PROC_SYMBOL(public_6809050);
CLANG_FORWARD_PROC_SYMBOL(public_6809140);
CLANG_FORWARD_PROC_SYMBOL(public_6809200);
CLANG_FORWARD_PROC_SYMBOL(public_68092f0);
CLANG_FORWARD_PROC_SYMBOL(public_6809480);

#define public_680924a _public_680924a
#define public_680926f _public_680926f
#define public_6809282 _public_6809282
#define public_6809290 _public_6809290
#define public_68092a3 _public_68092a3
#define public_68092b3 _public_68092b3
#define public_68092c7 _public_68092c7

PROC_DECLARE(0x6809200, internal_6809200, public_6809200);
extern "C" NAKED register_t __cdecl internal_6809200()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_680de80 @0x6809209*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680de80
        push edi
        call public_6809000
        mov ebx, dword ptr ss : [esp+0x20]
        mov esi, eax
        xor ebp, ebp
        add esp, 8
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ebx+0xC], esi
        je public_68092c7
        shl eax, 4
        push eax
        push ebp
        call public_68065d0
        add esp, 8
        cmp esi, ebp
        mov dword ptr ds : [ebx+8], eax
        jle public_68092c7
        mov dword ptr ss : [esp+0x1C], ebp
        public_680924a : nop
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        add esi, eax
        call public_6809050
        neg eax
        mov dword ptr ds : [esi], eax
        add eax, 6
        add esp, 4
        cmp eax, 5
        ja public_68092a3
/*FIXUP jmp dword ptr ds : [eax*4+public_68092d0] @0x6809268*/
  JMPTB cmp eax, 0
  JMPTB je public_68092b3
  JMPTB cmp eax, 1
  JMPTB je public_68092a3
  JMPTB cmp eax, 2
  JMPTB je public_6809290
  JMPTB cmp eax, 3
  JMPTB je public_68092a3
  JMPTB cmp eax, 4
  JMPTB je public_6809282
  JMPTB cmp eax, 5
  JMPTB je public_680926f
  JMPTB int 3
        public_680926f : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push edi
        call public_68092f0
        fstp qword ptr ds : [esi+8]
        add esp, 8
        jmp public_68092b3
        public_6809282 : nop
        push edi
        call public_6809140
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        jmp public_68092b3
        public_6809290 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push edi
        call public_6808fa0
        add esp, 8
        mov dword ptr ds : [esi+8], eax
        jmp public_68092b3
        public_68092a3 : nop
        push ebx
        push esi
        push ebp
/*FIXUP push offset public_680de78 @0x68092a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680de78
        call public_6809480
        add esp, 0x10
        public_68092b3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        inc ebp
        add ecx, 0x10
        cmp ebp, eax
        mov dword ptr ss : [esp+0x1C], ecx
        jl public_680924a
        public_68092c7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6809200)
        ASM_EXPORT_ENTRY_FIRST(0x680926f, public_680926f)
        ASM_EXPORT_ENTRY(0x6809282, public_6809282)
        ASM_EXPORT_ENTRY(0x6809290, public_6809290)
        ASM_EXPORT_ENTRY(0x68092a3, public_68092a3)
        ASM_EXPORT_ENTRY_LAST(0x68092b3, public_68092b3)
    }
}

#undef public_680924a
#undef public_680926f
#undef public_6809282
#undef public_6809290
#undef public_68092a3
#undef public_68092b3
#undef public_68092c7

#pragma init_seg(compiler)
extern "C" void const* const public_680926f = __AsmFindLabelExport(&internal_6809200, 0x680926f);
extern "C" void const* const public_6809282 = __AsmFindLabelExport(&internal_6809200, 0x6809282);
extern "C" void const* const public_6809290 = __AsmFindLabelExport(&internal_6809200, 0x6809290);
extern "C" void const* const public_68092a3 = __AsmFindLabelExport(&internal_6809200, 0x68092a3);
extern "C" void const* const public_68092b3 = __AsmFindLabelExport(&internal_6809200, 0x68092b3);
