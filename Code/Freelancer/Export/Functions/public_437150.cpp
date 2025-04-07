#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd00);
CLANG_FORWARD_PROC_SYMBOL(public_46a480);

#define public_43716e _public_43716e
#define public_43718e _public_43718e
#define public_4371a9 _public_4371a9
#define public_4371b9 _public_4371b9

PROC_DECLARE(0x437150, internal_437150, public_437150);
extern "C" NAKED register_t __cdecl internal_437150()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        call public_46a480
        test al, al
        jne public_4371b9
        mov eax, dword ptr ss : [esp+8]
        add eax, 0xFFFFFF00
        cmp eax, 5
        ja public_4371a9
/*FIXUP jmp dword ptr ds : [eax*4+public_4371c0] @0x437167*/
  JMPTB cmp eax, 0
  JMPTB je public_43716e
  JMPTB cmp eax, 1
  JMPTB je public_43718e
  JMPTB cmp eax, 2
  JMPTB je public_4371a9
  JMPTB cmp eax, 3
  JMPTB je public_4371a9
  JMPTB cmp eax, 4
  JMPTB je public_43716e
  JMPTB cmp eax, 5
  JMPTB je public_43718e
  JMPTB int 3
        public_43716e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+4]
        push ecx
        push edx
        push eax
        call public_44fd00
        add esp, 0xC
        test al, al
        je public_4371a9
        mov al, 1
        ret 0x10
        public_43718e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+4]
        push ecx
        push edx
        push eax
        call public_44fd00
        add esp, 0xC
        test al, al
        jne public_4371b9
        public_4371a9 : nop
        push esi
        mov esi, dword ptr ds : [public_5c7280]
        push 0x10
        call esi
        push 0x11
        call esi
        pop esi
        public_4371b9 : nop
        mov al, 1
        ret 0x10
        UNREACHABLE_TRAP(0x437150)
        ASM_EXPORT_ENTRY_SINGLE(0x43718e, public_43718e)
    }
}

#undef public_43716e
#undef public_43718e
#undef public_4371a9
#undef public_4371b9

#pragma init_seg(compiler)
extern "C" void const* const public_43718e = __AsmFindLabelExport(&internal_437150, 0x43718e);
