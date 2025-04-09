#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3400);

#define public_5b3420 _public_5b3420
#define public_5b3430 _public_5b3430
#define public_5b3450 _public_5b3450
#define public_5b3472 _public_5b3472
#define public_5b3483 _public_5b3483
#define public_5b3487 _public_5b3487
#define public_5b348d _public_5b348d
#define public_5b34a5 _public_5b34a5

PROC_DECLARE(0x5b3400, internal_5b3400, public_5b3400);
extern "C" NAKED register_t __cdecl internal_5b3400()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+0x44]
        mov edx, esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [ecx], 0
        sub edx, eax
        lea ebx, ds:[ebx]
        public_5b3420 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_5b3420
        lea ebx, ds:[ebx]
/*FIXUP public_5b3430 : nop
        push offset public_5e6dec @0x5b3430*/
  FIXUP public_5b3430 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6dec
        push esi
        call dword ptr ds : [public_5c7180]
        mov bl, byte ptr ds : [esi+eax]
        add esi, eax
        add esp, 8
        xor edi, edi
        test bl, bl
        mov ebp, esi
        je public_5b348d
        lea esp, ss:[esp]
        public_5b3450 : nop
        movsx eax, bl
        push eax
/*FIXUP push offset public_5e6dec @0x5b3454*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6dec
        inc esi
        call dword ptr ds : [public_5c7168]
        add esp, 8
        test eax, eax
        jne public_5b348d
        cmp bl, 0x22
        jne public_5b3483
        mov al, byte ptr ds : [esi]
        test al, al
        je public_5b348d
        public_5b3472 : nop
        inc esi
        cmp al, 0x22
        je public_5b3487
        mov byte ptr ds : [edi+ebp], al
        mov al, byte ptr ds : [esi]
        inc edi
        test al, al
        jne public_5b3472
        jmp public_5b348d
        public_5b3483 : nop
        mov byte ptr ds : [edi+ebp], bl
        inc edi
        public_5b3487 : nop
        mov bl, byte ptr ds : [esi]
        test bl, bl
        jne public_5b3450
        public_5b348d : nop
        mov byte ptr ds : [edi+ebp], 0
        cmp byte ptr ss : [ebp], 0
        je public_5b34a5
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [eax+ecx*4+4], ebp
        inc dword ptr ds : [eax]
        jmp public_5b3430
        public_5b34a5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5b3400)
    }
}

#undef public_5b3420
#undef public_5b3430
#undef public_5b3450
#undef public_5b3472
#undef public_5b3483
#undef public_5b3487
#undef public_5b348d
#undef public_5b34a5
