#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f8b0);

#define public_66212d6 _public_66212d6
#define public_662132c _public_662132c
#define public_6621370 _public_6621370
#define public_6621387 _public_6621387
#define public_6621390 _public_6621390
#define public_66213a1 _public_66213a1

PROC_DECLARE(0x66212c0, internal_66212c0, public_66212c0);
extern "C" NAKED register_t __cdecl internal_66212c0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        cmp ebp, 0xFFFFFFFF
        push edi
        jne public_66212d6
        pop edi
        or eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_66212d6 : nop
        test ebp, ebp
        je public_662132c
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_662132c
        mov ecx, dword ptr ss : [ebp+0x20]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x18], edx
        je public_662132c
        mov ecx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662a850 @0x6621303*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a850
        push 0x42A
        mov eax, 0x100002
/*FIXUP push offset public_662a5c8 @0x6621312*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x6621317*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_662132c : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov ecx, esi
        call public_661f8b0
        cmp eax, 0xFFFFFFFF
        je public_6621370
        mov edx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662a7f8 @0x6621347*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a7f8
        push 0x42F
        mov eax, 0x100002
/*FIXUP push offset public_662a5c8 @0x6621356*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x662135b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6621370 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x2C]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        jne public_6621387
        pop edi
        pop esi
        pop ebp
        or eax, eax
        pop ebx
        ret 0xC
        public_6621387 : nop
        mov edi, dword ptr ds : [esi+0x58]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_66213a1
        public_6621390 : nop
        mov eax, dword ptr ds : [esi+0x38]
        push ebp
        push ebx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6621390
        public_66213a1 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66212c0)
    }
}

#undef public_66212d6
#undef public_662132c
#undef public_6621370
#undef public_6621387
#undef public_6621390
#undef public_66213a1
