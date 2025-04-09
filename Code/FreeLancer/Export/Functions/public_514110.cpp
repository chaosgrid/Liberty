#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_514110);
CLANG_FORWARD_PROC_SYMBOL(public_514240);
CLANG_FORWARD_PROC_SYMBOL(public_514250);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_514134 _public_514134
#define public_514157 _public_514157
#define public_5141eb _public_5141eb
#define public_514217 _public_514217

PROC_DECLARE(0x514110, internal_514110, public_514110);
extern "C" NAKED register_t __cdecl internal_514110()
{
    __asm
    {
        mov al, byte ptr ds : [public_6751e8]
        sub esp, 0x48
        test al, 1
        jne public_514134
        mov dl, al
        or dl, 1
/*FIXUP push offset _public_514250 @0x514121*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_514250
        mov byte ptr ds : [public_6751e8], dl
        call public_5b7e6c
        add esp, 4
        public_514134 : nop
        mov cl, byte ptr ds : [public_6751e8]
        mov al, 2
        test al, cl
        jne public_514157
        mov dl, cl
        or dl, al
/*FIXUP push offset _public_514240 @0x514144*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_514240
        mov byte ptr ds : [public_6751e8], dl
        call public_5b7e6c
        add esp, 4
        public_514157 : nop
        mov al, byte ptr ds : [public_6751fc]
        test al, al
        jne public_5141eb
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        push edi
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov byte ptr ds : [public_6751fc], 1
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5db7e8 @0x51417d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7e8
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        mov edi, dword ptr ds : [public_5c65e8]
        push eax
        call edi
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 0x10
        mov dword ptr ds : [public_6751dc], eax
        mov dword ptr ds : [public_6751e0], ecx
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov dword ptr ds : [public_6751e4], edx
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5db7dc @0x5141bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7dc
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        push eax
        call edi
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 0x10
        pop edi
        mov dword ptr ds : [public_6751d0], eax
        mov dword ptr ds : [public_6751d4], ecx
        mov dword ptr ds : [public_6751d8], edx
        pop esi
        public_5141eb : nop
        mov al, byte ptr ss : [esp+0x54]
        test al, al
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, eax
        je public_514217
        mov edx, dword ptr ds : [public_6751dc]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [public_6751e0]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [public_6751e4]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x48
        ret 
        public_514217 : nop
        mov edx, dword ptr ds : [public_6751d0]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [public_6751d4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [public_6751d8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x514110)
    }
}

#undef public_514134
#undef public_514157
#undef public_5141eb
#undef public_514217
