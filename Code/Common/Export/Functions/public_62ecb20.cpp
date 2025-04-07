#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4ba0);
CLANG_FORWARD_PROC_SYMBOL(public_62ecb20);

#define public_62ecba5 _public_62ecba5
#define public_62ecbbb _public_62ecbbb
#define public_62ecbfc _public_62ecbfc

PROC_DECLARE(0x62ecb20, internal_62ecb20, public_62ecb20);
extern "C" NAKED register_t __cdecl internal_62ecb20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62ecbfc
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x1958]
        test cl, cl
        je public_62ecbfc
        mov cl, byte ptr ds : [eax+0x1429]
        test cl, cl
        jne public_62ecbfc
        mov ecx, dword ptr ds : [eax+0x1370]
        test ecx, ecx
        je public_62ecbfc
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_62ecbfc
        mov dl, byte ptr ds : [esi+0xC0]
        test dl, dl
        jne public_62ecbbb
        mov dl, byte ptr ds : [esi+0xC3]
        test dl, dl
        je public_62ecbbb
        push ecx
        call public_62d4ba0
        add esp, 4
        test eax, eax
        je public_62ecba5
        cmp dword ptr ds : [eax+0xC0], 0xF
        je public_62ecbfc
        public_62ecba5 : nop
        mov eax, dword ptr ds : [esi+8]
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [eax+0x17CC]
        fnstsw ax
        test ah, 0x41
        jp public_62ecbfc
        mov al, 1
        pop esi
        ret 
        public_62ecbbb : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [ecx+0xC0], 0xA
        jne public_62ecbfc
        mov eax, dword ptr ds : [eax+0x1580]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62ecbfc
        mov al, byte ptr ds : [esi+0xC0]
        test al, al
        je public_62ecbfc
        mov eax, dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [eax+0x181C]
        fnstsw ax
        test ah, 5
        jp public_62ecbfc
        mov al, 1
        pop esi
        ret 
        public_62ecbfc : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62ecb20)
    }
}

#undef public_62ecba5
#undef public_62ecbbb
#undef public_62ecbfc
