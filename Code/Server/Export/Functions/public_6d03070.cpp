#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);

#define public_6d030e0 _public_6d030e0
#define public_6d03111 _public_6d03111
#define public_6d03192 _public_6d03192
#define public_6d031f5 _public_6d031f5

PROC_DECLARE(0x6d03070, internal_6d03070, public_6d03070);
extern "C" NAKED register_t __cdecl internal_6d03070()
{
    __asm
    {
        sub esp, 0x4C
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x154]
        test al, 0x40
        jne public_6d03192
        test ah, 8
        jne public_6d03192
        test ah, 4
        je public_6d03111
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        fld qword ptr ds : [public_6d67728]
        mov esi, eax
        fcos 
        mov eax, dword ptr ss : [esp+0x60]
        mov edi, eax
        mov ecx, 9
        rep movsd
        add eax, 0x18
        mov ecx, 3
        fld qword ptr ds : [public_6d67728]
        fsin 
        lea ecx, ds:[ecx]
        public_6d030e0 : nop
        fld dword ptr ds : [eax-0x18]
        add eax, 4
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-4]
        fld st(1)
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax-0x1C]
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-4]
        jne public_6d030e0
        fstp st(0)
        pop edi
        fstp st(0)
        pop esi
        add esp, 0x4C
        ret 0xC
/*FIXUP public_6d03111 : nop
        push offset public_6d676f4 @0x6d03111*/
  FIXUP public_6d03111 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d676f4
        push 0xEB
/*FIXUP push offset public_6d676c8 @0x6d0311b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d676c8
        mov eax, 0x100001
/*FIXUP push offset public_6d655d8 @0x6d03125*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655d8
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x20], 0x4708B800
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x24], 0
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x28], 0x4708B800
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        add esp, 0x14
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        pop edi
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        pop esi
        add esp, 0x4C
        ret 0xC
        public_6d03192 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x24]
        rep movsd
        call dword ptr ds : [public_6d64c7c]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [public_6d8d97c]
        test eax, eax
        fild dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x14], 0xC3AF0000
        fmul dword ptr ds : [public_6d656b8]
        fmul qword ptr ds : [public_6d66b80]
        fld st(0)
        fcos 
        fmul qword ptr ds : [public_6d676c0]
        fstp dword ptr ss : [esp+0xC]
        fsin 
        fmul qword ptr ds : [public_6d676c0]
        fstp dword ptr ss : [esp+0x10]
        jne public_6d031f5
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d97c], eax
        public_6d031f5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        rep movsd
        pop edi
        pop esi
        add esp, 0x4C
        ret 0xC
        UNREACHABLE_TRAP(0x6d03070)
    }
}

#undef public_6d030e0
#undef public_6d03111
#undef public_6d03192
#undef public_6d031f5
