#include "Content-PCH.h"


#define public_6ecd1dc _public_6ecd1dc
#define public_6ecd216 _public_6ecd216
#define public_6ecd250 _public_6ecd250
#define public_6ecd28a _public_6ecd28a
#define public_6ecd2be _public_6ecd2be
#define public_6ecd2fa _public_6ecd2fa
#define public_6ecd302 _public_6ecd302

PROC_DECLARE(0x6ecd160, internal_6ecd160, public_6ecd160);
extern "C" NAKED register_t __cdecl internal_6ecd160()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb306c]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        push 0
        mov ecx, esi
        call ebp
        test al, al
        jne public_6ecd2fa
        mov edi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fb5924 @0x6ecd187*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5924
        push 0
        mov ecx, esi
        call edi
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_6ecd2fa
        push 0
        mov ecx, esi
        call ebp
        test al, al
        jne public_6ecd1dc
/*FIXUP push offset public_6fb57a0 @0x6ecd1b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push 0
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_6ecd1dc
        push 0
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [ecx+0xC], eax
        public_6ecd1dc : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecd216
/*FIXUP push offset public_6fb57a0 @0x6ecd1ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push 1
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_6ecd216
        push 1
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [edx+0x10], eax
        public_6ecd216 : nop
        push 2
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecd250
/*FIXUP push offset public_6fb57a0 @0x6ecd224*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push 2
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_6ecd250
        push 2
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [ecx+0x14], eax
        public_6ecd250 : nop
        push 3
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecd28a
/*FIXUP push offset public_6fb57a0 @0x6ecd25e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push 3
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_6ecd28a
        push 3
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [edx+0x18], eax
        public_6ecd28a : nop
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecd2be
/*FIXUP push offset public_6fb57a0 @0x6ecd298*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push 4
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_6ecd2be
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x20]
        public_6ecd2be : nop
        push 5
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecd302
/*FIXUP push offset public_6fb57a0 @0x6ecd2cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push 5
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_6ecd302
        push 5
        mov ecx, esi
        call dword ptr ds : [public_6fb3040]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ecx+0x1C], al
        pop ebx
        pop ecx
        ret 4
        public_6ecd2fa : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edx+0x24], 1
        public_6ecd302 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ecd160)
    }
}

#undef public_6ecd1dc
#undef public_6ecd216
#undef public_6ecd250
#undef public_6ecd28a
#undef public_6ecd2be
#undef public_6ecd2fa
#undef public_6ecd302
