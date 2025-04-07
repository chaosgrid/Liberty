#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6790);

#define public_6ad67df _public_6ad67df
#define public_6ad67fe _public_6ad67fe
#define public_6ad6811 _public_6ad6811
#define public_6ad6815 _public_6ad6815

PROC_DECLARE(0x6ad6790, internal_6ad6790, public_6ad6790);
extern "C" NAKED register_t __cdecl internal_6ad6790()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_6ae1104], ebx
        push esi
        push edi
        jne public_6ad67df
/*FIXUP push offset public_6ada890 @0x6ad679d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada890
        call dword ptr ds : [public_6ada054]
        mov edi, eax
        cmp edi, ebx
        je public_6ad6815
        mov esi, dword ptr ds : [public_6ada058]
/*FIXUP push offset public_6adaedc @0x6ad67b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaedc
        push edi
        call esi
        test eax, eax
        mov dword ptr ds : [public_6ae1104], eax
        je public_6ad6815
/*FIXUP push offset public_6adaecc @0x6ad67c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaecc
        push edi
        call esi
/*FIXUP push offset public_6adaeb8 @0x6ad67cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaeb8
        push edi
        mov dword ptr ds : [public_6ae1108], eax
        call esi
        mov dword ptr ds : [public_6ae110c], eax
        public_6ad67df : nop
        mov eax, dword ptr ds : [public_6ae1108]
        test eax, eax
        je public_6ad67fe
        call eax
        mov ebx, eax
        test ebx, ebx
        je public_6ad67fe
        mov eax, dword ptr ds : [public_6ae110c]
        test eax, eax
        je public_6ad67fe
        push ebx
        call eax
        mov ebx, eax
        public_6ad67fe : nop
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x18]
        push ebx
        call dword ptr ds : [public_6ae1104]
        public_6ad6811 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        public_6ad6815 : nop
        xor eax, eax
        jmp public_6ad6811
        UNREACHABLE_TRAP(0x6ad6790)
    }
}

#undef public_6ad67df
#undef public_6ad67fe
#undef public_6ad6811
#undef public_6ad6815
