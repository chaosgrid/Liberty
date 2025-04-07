#include "ImeUi-PCH.h"


#define public_6712c40 _public_6712c40
#define public_6712c60 _public_6712c60
#define public_6712c71 _public_6712c71
#define public_6712c7b _public_6712c7b
#define public_6712c8f _public_6712c8f

PROC_DECLARE(0x6712c10, internal_6712c10, public_6712c10);
extern "C" NAKED register_t __cdecl internal_6712c10()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x88]
        test al, al
        mov al, byte ptr ss : [esp+0x14]
        je public_6712c60
        test al, al
        je public_6712c40
        mov eax, dword ptr ds : [esi+0x84]
        push eax
        call dword ptr ds : [public_671937c]
        mov dword ptr ds : [esi+0x88], eax
        jmp public_6712c7b
        public_6712c40 : nop
        cmp edi, dword ptr ds : [esi+0x80]
        jae public_6712c7b
        mov ecx, dword ptr ds : [esi+0x84]
        cmp word ptr ds : [ecx+edi*2], 0
        je public_6712c7b
        lea edx, ds:[edi+1]
        mov dword ptr ds : [esi+0x88], edx
        jmp public_6712c7b
        public_6712c60 : nop
        test al, al
        jne public_6712c71
        lea eax, ds:[edi-1]
        test eax, eax
        mov dword ptr ds : [esi+0x88], eax
        jge public_6712c7b
        public_6712c71 : nop
        mov dword ptr ds : [esi+0x88], 0
        public_6712c7b : nop
        cmp dword ptr ds : [esi+0x88], edi
        setne bl
        test bl, bl
        je public_6712c8f
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        public_6712c8f : nop
        pop edi
        mov al, bl
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6712c10)
    }
}

#undef public_6712c40
#undef public_6712c60
#undef public_6712c71
#undef public_6712c7b
#undef public_6712c8f
