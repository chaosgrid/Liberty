#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf41d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad089c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad121a);

#define public_6ad1261 _public_6ad1261
#define public_6ad1270 _public_6ad1270
#define public_6ad1279 _public_6ad1279

PROC_DECLARE(0x6ad121a, internal_6ad121a, public_6ad121a);
extern "C" NAKED register_t __cdecl internal_6ad121a()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6adaa70 @0x6ad121f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaa70
/*FIXUP push offset _public_6ad023c @0x6ad1224*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_6ad1261
        mov ecx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6ad1261
        and dword ptr ss : [ebp-4], 0
        push ecx
        push dword ptr ds : [eax+0x18]
        call public_6acf41d
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        public_6ad1261 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6ad1270 : nop
        xor eax, eax
        cmp byte ptr ss : [ebp+0xC], al
        setne al
        ret 
        public_6ad1279 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        jmp public_6ad089c
        UNREACHABLE_TRAP(0x6ad121a)
        ASM_EXPORT_ENTRY_FIRST(0x6ad1270, public_6ad1270)
        ASM_EXPORT_ENTRY_LAST(0x6ad1279, public_6ad1279)
    }
}

#undef public_6ad1261
#undef public_6ad1270
#undef public_6ad1279

#pragma init_seg(compiler)
extern "C" void const* const public_6ad1270 = __AsmFindLabelExport(&internal_6ad121a, 0x6ad1270);
extern "C" void const* const public_6ad1279 = __AsmFindLabelExport(&internal_6ad121a, 0x6ad1279);
