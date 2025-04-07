#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9a8e);
CLANG_FORWARD_PROC_SYMBOL(public_65d9b33);
CLANG_FORWARD_PROC_SYMBOL(public_65d9b3c);
CLANG_FORWARD_PROC_SYMBOL(public_65d9b45);

#define public_65d9ab0 _public_65d9ab0
#define public_65d9adf _public_65d9adf
#define public_65d9ae7 _public_65d9ae7
#define public_65d9af2 _public_65d9af2
#define public_65d9af3 _public_65d9af3
#define public_65d9b04 _public_65d9b04
#define public_65d9b21 _public_65d9b21

PROC_DECLARE(0x65d9a8e, internal_65d9a8e, public_65d9a8e);
extern "C" NAKED register_t __cdecl internal_65d9a8e()
{
    __asm
    {
        push edi
        call public_65d9b33
        push 1
        pop edi
        cmp dword ptr ds : [public_65e6174], edi
        jne public_65d9ab0
        push dword ptr ss : [esp+8]
        call dword ptr ds : [public_65e1088]
        push eax
        call dword ptr ds : [public_65e1084]
        public_65d9ab0 : nop
        cmp dword ptr ss : [esp+0xC], 0
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_65e6170], edi
        mov byte ptr ds : [public_65e616c], bl
        jne public_65d9b04
        mov eax, dword ptr ds : [public_65e7a50]
        test eax, eax
        je public_65d9af3
        mov ecx, dword ptr ds : [public_65e7a4c]
        push esi
        lea esi, ds:[ecx-4]
        cmp esi, eax
        jb public_65d9af2
        public_65d9adf : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_65d9ae7
        call eax
        public_65d9ae7 : nop
        sub esi, 4
        cmp esi, dword ptr ds : [public_65e7a50]
        jae public_65d9adf
        public_65d9af2 : nop
        pop esi
/*FIXUP public_65d9af3 : nop
        push offset public_65e3030 @0x65d9af3*/
  FIXUP public_65d9af3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3030
/*FIXUP push offset public_65e3028 @0x65d9af8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3028
        call public_65d9b45
        pop ecx
        pop ecx
/*FIXUP public_65d9b04 : nop
        push offset public_65e303c @0x65d9b04*/
  FIXUP public_65d9b04 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e303c
/*FIXUP push offset public_65e3034 @0x65d9b09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3034
        call public_65d9b45
        pop ecx
        pop ecx
        test ebx, ebx
        pop ebx
        je public_65d9b21
        call public_65d9b3c
        pop edi
        ret 
        public_65d9b21 : nop
        push dword ptr ss : [esp+8]
        mov dword ptr ds : [public_65e6174], edi
        call dword ptr ds : [public_65e1080]
        UNREACHABLE_TRAP(0x65d9a8e)
    }
}

#undef public_65d9ab0
#undef public_65d9adf
#undef public_65d9ae7
#undef public_65d9af2
#undef public_65d9af3
#undef public_65d9b04
#undef public_65d9b21
