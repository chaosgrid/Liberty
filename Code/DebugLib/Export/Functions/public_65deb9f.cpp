#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);
CLANG_FORWARD_PROC_SYMBOL(public_65ddb10);
CLANG_FORWARD_PROC_SYMBOL(public_65de5a0);
CLANG_FORWARD_PROC_SYMBOL(public_65deb9f);

#define public_65debec _public_65debec
#define public_65dec09 _public_65dec09
#define public_65dec0e _public_65dec0e
#define public_65dec1f _public_65dec1f
#define public_65dec37 _public_65dec37
#define public_65dec4d _public_65dec4d
#define public_65dec98 _public_65dec98
#define public_65dec9c _public_65dec9c
#define public_65deca3 _public_65deca3
#define public_65decd4 _public_65decd4
#define public_65decd6 _public_65decd6

PROC_DECLARE(0x65deb9f, internal_65deb9f, public_65deb9f);
extern "C" NAKED register_t __cdecl internal_65deb9f()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1b18 @0x65deba4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1b18
/*FIXUP push offset _public_65dcf2c @0x65deba9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, dword ptr ds : [public_65e6430]
        xor ebx, ebx
        cmp eax, ebx
        jne public_65dec0e
        lea eax, ss:[ebp-0x1C]
        push eax
        push 1
        pop esi
        push esi
/*FIXUP push offset public_65e1b10 @0x65debd8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1b10
        push esi
        call dword ptr ds : [public_65e1038]
        test eax, eax
        je public_65debec
        mov eax, esi
        jmp public_65dec09
        public_65debec : nop
        lea eax, ss:[ebp-0x1C]
        push eax
        push esi
/*FIXUP push offset public_65e1b0c @0x65debf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1b0c
        push esi
        push ebx
        call dword ptr ds : [public_65e103c]
        test eax, eax
        je public_65decd4
        push 2
        pop eax
        public_65dec09 : nop
        mov dword ptr ds : [public_65e6430], eax
        public_65dec0e : nop
        cmp eax, 2
        jne public_65dec37
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_65dec1f
        mov eax, dword ptr ds : [public_65e63e8]
        public_65dec1f : nop
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        push eax
        call dword ptr ds : [public_65e103c]
        jmp public_65decd6
        public_65dec37 : nop
        cmp eax, 1
        jne public_65decd4
        cmp dword ptr ss : [ebp+0x18], ebx
        jne public_65dec4d
        mov eax, dword ptr ds : [public_65e63f8]
        mov dword ptr ss : [ebp+0x18], eax
        public_65dec4d : nop
        push ebx
        push ebx
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+0x20]
        neg eax
        sbb eax, eax
        and eax, 8
        inc eax
        push eax
        push dword ptr ss : [ebp+0x18]
        call dword ptr ds : [public_65e10e8]
        mov dword ptr ss : [ebp-0x20], eax
        cmp eax, ebx
        je public_65decd4
        mov dword ptr ss : [ebp-4], ebx
        lea edi, ds:[eax+eax]
        mov eax, edi
        add eax, 3
        and al, 0xFC
        call public_65de5a0
        mov dword ptr ss : [ebp-0x18], esp
        mov esi, esp
        mov dword ptr ss : [ebp-0x24], esi
        push edi
        push ebx
        push esi
        call public_65ddb10
        add esp, 0xC
        jmp public_65deca3
        public_65dec98 : nop
        push 1
        pop eax
        ret 
        public_65dec9c : nop
        mov esp, dword ptr ss : [ebp-0x18]
        xor ebx, ebx
        xor esi, esi
        public_65deca3 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        cmp esi, ebx
        je public_65decd4
        push dword ptr ss : [ebp-0x20]
        push esi
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push 1
        push dword ptr ss : [ebp+0x18]
        call dword ptr ds : [public_65e10e8]
        cmp eax, ebx
        je public_65decd4
        push dword ptr ss : [ebp+0x14]
        push eax
        push esi
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_65e1038]
        jmp public_65decd6
        public_65decd4 : nop
        xor eax, eax
        public_65decd6 : nop
        lea esp, ss:[ebp-0x34]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65deb9f)
        ASM_EXPORT_ENTRY_FIRST(0x65dec98, public_65dec98)
        ASM_EXPORT_ENTRY_LAST(0x65dec9c, public_65dec9c)
    }
}

#undef public_65debec
#undef public_65dec09
#undef public_65dec0e
#undef public_65dec1f
#undef public_65dec37
#undef public_65dec4d
#undef public_65dec98
#undef public_65dec9c
#undef public_65deca3
#undef public_65decd4
#undef public_65decd6

#pragma init_seg(compiler)
extern "C" void const* const public_65dec98 = __AsmFindLabelExport(&internal_65deb9f, 0x65dec98);
extern "C" void const* const public_65dec9c = __AsmFindLabelExport(&internal_65deb9f, 0x65dec9c);
