#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf41d);
CLANG_FORWARD_PROC_SYMBOL(public_6acf424);
CLANG_FORWARD_PROC_SYMBOL(public_6acf910);
CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad089c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad08fd);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1056);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1281);
CLANG_FORWARD_PROC_SYMBOL(public_6ad533b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5357);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5373);

#define public_6ad10e4 _public_6ad10e4
#define public_6ad10f3 _public_6ad10f3
#define public_6ad114d _public_6ad114d
#define public_6ad1195 _public_6ad1195
#define public_6ad11dc _public_6ad11dc
#define public_6ad11f6 _public_6ad11f6
#define public_6ad11fb _public_6ad11fb
#define public_6ad11ff _public_6ad11ff
#define public_6ad120e _public_6ad120e
#define public_6ad1212 _public_6ad1212

PROC_DECLARE(0x6ad1056, internal_6ad1056, public_6ad1056);
extern "C" NAKED register_t __cdecl internal_6ad1056()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6adaa60 @0x6ad105b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaa60
/*FIXUP push offset _public_6ad023c @0x6ad1060*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6ad11ff
        cmp byte ptr ds : [eax+8], 0
        je public_6ad11ff
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_6ad11ff
        mov edx, dword ptr ss : [ebp+0xC]
        lea edi, ds:[eax+edx+0xC]
        and dword ptr ss : [ebp-4], 0
        test byte ptr ds : [ecx], 8
        je public_6ad10f3
        mov esi, dword ptr ss : [ebp+8]
        push 1
        push dword ptr ds : [esi+0x18]
        call public_6ad533b
        pop ecx
        pop ecx
        test eax, eax
        je public_6ad11f6
        push 1
        push edi
        call public_6ad5357
        pop ecx
        pop ecx
        test eax, eax
        je public_6ad11f6
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        add ecx, 8
        push ecx
        public_6ad10e4 : nop
        push eax
        call public_6ad1281
        pop ecx
        pop ecx
        mov dword ptr ds : [edi], eax
        jmp public_6ad11fb
        public_6ad10f3 : nop
        mov esi, dword ptr ss : [ebp+0x14]
        test byte ptr ds : [esi], 1
        je public_6ad114d
        mov ebx, dword ptr ss : [ebp+8]
        push 1
        push dword ptr ds : [ebx+0x18]
        call public_6ad533b
        pop ecx
        pop ecx
        test eax, eax
        je public_6ad11f6
        push 1
        push edi
        call public_6ad5357
        pop ecx
        pop ecx
        test eax, eax
        je public_6ad11f6
        push dword ptr ds : [esi+0x14]
        push dword ptr ds : [ebx+0x18]
        push edi
        call public_6acf910
        add esp, 0xC
        cmp dword ptr ds : [esi+0x14], 4
        jne public_6ad11fb
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6ad11fb
        add esi, 8
        push esi
        jmp public_6ad10e4
        public_6ad114d : nop
        cmp dword ptr ds : [esi+0x18], 0
        mov ebx, dword ptr ss : [ebp+8]
        push 1
        push dword ptr ds : [ebx+0x18]
        jne public_6ad1195
        call public_6ad533b
        pop ecx
        pop ecx
        test eax, eax
        je public_6ad11f6
        push 1
        push edi
        call public_6ad5357
        pop ecx
        pop ecx
        test eax, eax
        je public_6ad11f6
        push dword ptr ds : [esi+0x14]
        add esi, 8
        push esi
        push dword ptr ds : [ebx+0x18]
        call public_6ad1281
        pop ecx
        pop ecx
        push eax
        push edi
        call public_6acf910
        add esp, 0xC
        jmp public_6ad11fb
        public_6ad1195 : nop
        call public_6ad533b
        pop ecx
        pop ecx
        test eax, eax
        je public_6ad11f6
        push 1
        push edi
        call public_6ad5357
        pop ecx
        pop ecx
        test eax, eax
        je public_6ad11f6
        push dword ptr ds : [esi+0x18]
        call public_6ad5373
        pop ecx
        test eax, eax
        je public_6ad11f6
        test byte ptr ds : [esi], 4
        je public_6ad11dc
        push 1
        lea eax, ds:[esi+8]
        push eax
        push dword ptr ds : [ebx+0x18]
        call public_6ad1281
        pop ecx
        pop ecx
        push eax
        push dword ptr ds : [esi+0x18]
        push edi
        call public_6acf424
        jmp public_6ad11fb
        public_6ad11dc : nop
        lea eax, ds:[esi+8]
        push eax
        push dword ptr ds : [ebx+0x18]
        call public_6ad1281
        pop ecx
        pop ecx
        push eax
        push dword ptr ds : [esi+0x18]
        push edi
        call public_6acf41d
        jmp public_6ad11fb
        public_6ad11f6 : nop
        call public_6ad08fd
        public_6ad11fb : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        public_6ad11ff : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6ad120e : nop
        push 1
        pop eax
        ret 
        public_6ad1212 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        jmp public_6ad089c
        UNREACHABLE_TRAP(0x6ad1056)
        ASM_EXPORT_ENTRY_FIRST(0x6ad120e, public_6ad120e)
        ASM_EXPORT_ENTRY_LAST(0x6ad1212, public_6ad1212)
    }
}

#undef public_6ad10e4
#undef public_6ad10f3
#undef public_6ad114d
#undef public_6ad1195
#undef public_6ad11dc
#undef public_6ad11f6
#undef public_6ad11fb
#undef public_6ad11ff
#undef public_6ad120e
#undef public_6ad1212

#pragma init_seg(compiler)
extern "C" void const* const public_6ad120e = __AsmFindLabelExport(&internal_6ad1056, 0x6ad120e);
extern "C" void const* const public_6ad1212 = __AsmFindLabelExport(&internal_6ad1056, 0x6ad1212);
