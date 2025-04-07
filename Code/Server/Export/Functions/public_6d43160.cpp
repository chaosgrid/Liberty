#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d43160);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6d43196 _public_6d43196
#define public_6d431fe _public_6d431fe
#define public_6d4320b _public_6d4320b
#define public_6d43238 _public_6d43238
#define public_6d43278 _public_6d43278
#define public_6d4328a _public_6d4328a
#define public_6d432a4 _public_6d432a4
#define public_6d432bb _public_6d432bb
#define public_6d432fe _public_6d432fe
#define public_6d43310 _public_6d43310

PROC_DECLARE(0x6d43160, internal_6d43160, public_6d43160);
extern "C" NAKED register_t __cdecl internal_6d43160()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xDC
        push ebx
        push esi
        push edi
        mov eax, 4
        call public_6d60160
        mov edi, esp
        push 0x1C
        lea eax, ss:[ebp-0x24]
        push eax
        push edi
        call dword ptr ds : [public_6d64a80]
        test eax, eax
        jne public_6d43196
        lea esp, ss:[ebp-0xE8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6d43196 : nop
        mov ebx, dword ptr ss : [ebp-0x20]
        lea ecx, ss:[ebp-0xDC]
        push ecx
        call dword ptr ds : [public_6d64a88]
        mov eax, dword ptr ss : [ebp-0xD8]
        lea esi, ds:[eax-1]
        not esi
        and esi, edi
        mov edi, dword ptr ds : [public_6d64a78]
        sub esi, eax
        mov dword ptr ss : [ebp-4], eax
        mov al, byte ptr ds : [public_6d904a4]
        test al, 1
        jne public_6d4320b
        mov cl, al
        lea edx, ss:[ebp-0xB8]
        or cl, 1
        push edx
        mov byte ptr ds : [public_6d904a4], cl
        mov dword ptr ds : [public_6d904a8], 0
        mov dword ptr ss : [ebp-0xB8], 0x94
        call edi
        test eax, eax
        je public_6d431fe
        mov eax, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [public_6d904a8], eax
/*FIXUP public_6d431fe : nop
        push offset _public_6ce1090 @0x6d431fe*/
  FIXUP public_6d431fe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ce1090
        call public_6d6013e
        add esp, 4
        public_6d4320b : nop
        mov eax, dword ptr ds : [public_6d904a8]
        mov ecx, eax
        dec ecx
        neg ecx
        sbb ecx, ecx
        and ecx, 0xFFFF1000
        add ecx, 0x11000
        add ecx, ebx
        cmp esi, ecx
        jae public_6d43238
        xor eax, eax
        lea esp, ss:[ebp-0xE8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6d43238 : nop
        mov cl, byte ptr ds : [public_6d904a4]
        test cl, 1
        jne public_6d4328a
        lea edx, ss:[ebp-0xB8]
        or cl, 1
        push edx
        mov byte ptr ds : [public_6d904a4], cl
        mov dword ptr ds : [public_6d904a8], 0
        mov dword ptr ss : [ebp-0xB8], 0x94
        call edi
        test eax, eax
        je public_6d43278
        mov eax, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [public_6d904a8], eax
/*FIXUP public_6d43278 : nop
        push offset _public_6ce1090 @0x6d43278*/
  FIXUP public_6d43278 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ce1090
        call public_6d6013e
        mov eax, dword ptr ds : [public_6d904a8]
        add esp, 4
        public_6d4328a : nop
        cmp eax, 1
        je public_6d432bb
        cmp esi, ebx
        jbe public_6d432a4
        push 0x4000
        mov ecx, esi
        sub ecx, ebx
        push ecx
        push ebx
        call dword ptr ds : [public_6d64a74]
        public_6d432a4 : nop
        mov edx, dword ptr ss : [ebp-4]
        push 4
        push 0x1000
        push edx
        push esi
        call dword ptr ds : [public_6d64a7c]
        mov eax, dword ptr ds : [public_6d904a8]
        public_6d432bb : nop
        mov cl, byte ptr ds : [public_6d904a4]
        test cl, 1
        jne public_6d43310
        mov bl, cl
        lea eax, ss:[ebp-0xB8]
        or bl, 1
        push eax
        mov byte ptr ds : [public_6d904a4], bl
        mov dword ptr ds : [public_6d904a8], 0
        mov dword ptr ss : [ebp-0xB8], 0x94
        call edi
        test eax, eax
        je public_6d432fe
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [public_6d904a8], ecx
/*FIXUP public_6d432fe : nop
        push offset _public_6ce1090 @0x6d432fe*/
  FIXUP public_6d432fe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ce1090
        call public_6d6013e
        mov eax, dword ptr ds : [public_6d904a8]
        add esp, 4
        public_6d43310 : nop
        dec eax
        neg eax
        sbb eax, eax
        and eax, 0x103
        lea edx, ss:[ebp-8]
        push edx
        inc eax
        push eax
        mov eax, dword ptr ss : [ebp-4]
        push eax
        push esi
        call dword ptr ds : [public_6d64a6c]
        lea esp, ss:[ebp-0xE8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d43160)
    }
}

#undef public_6d43196
#undef public_6d431fe
#undef public_6d4320b
#undef public_6d43238
#undef public_6d43278
#undef public_6d4328a
#undef public_6d432a4
#undef public_6d432bb
#undef public_6d432fe
#undef public_6d43310
