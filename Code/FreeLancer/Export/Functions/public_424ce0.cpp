#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_424870);
CLANG_FORWARD_PROC_SYMBOL(public_4249c0);
CLANG_FORWARD_PROC_SYMBOL(public_424ce0);

#define public_424d50 _public_424d50
#define public_424d7f _public_424d7f
#define public_424d91 _public_424d91
#define public_424da6 _public_424da6
#define public_424daf _public_424daf

PROC_DECLARE(0x424ce0, internal_424ce0, public_424ce0);
extern "C" NAKED register_t __cdecl internal_424ce0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x44]
        push edi
        mov ecx, 0xA
        lea edi, ss:[esp+0x18]
/*FIXUP push offset public_679bc0 @0x424cf3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bc0
        lea eax, ss:[esp+0x1C]
        rep movsd
        mov edi, dword ptr ss : [esp+0x48]
        push eax
        push edi
        call public_4249c0
        mov bl, al
        add esp, 0xC
        test bl, bl
        jne public_424da6
        mov al, byte ptr ss : [esp+0x3D]
        test al, al
        jne public_424d7f
        mov eax, dword ptr ds : [public_679bc8]
        test eax, eax
        jbe public_424d91
        mov eax, dword ptr ds : [public_679bcc]
        test eax, eax
        jbe public_424d7f
        mov dword ptr ss : [esp+0xC], 0x20
        mov dword ptr ss : [esp+0x10], 0x18
        mov dword ptr ss : [esp+0x14], 0x10
        xor esi, esi
        lea ebx, ds:[ebx]
        public_424d50 : nop
        mov ecx, dword ptr ss : [esp+esi*4+0xC]
/*FIXUP push offset public_679bc0 @0x424d54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bc0
        lea edx, ss:[esp+0x1C]
        push edx
        push edi
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call public_4249c0
        mov bl, al
        add esp, 0xC
        test bl, bl
        jne public_424da6
        inc esi
        cmp esi, 3
        jb public_424d50
        public_424d7f : nop
        mov eax, dword ptr ds : [public_679bc8]
        test eax, eax
        jbe public_424d91
        mov eax, dword ptr ds : [public_679bcc]
        test eax, eax
        ja public_424daf
        public_424d91 : nop
        push 0x1E0
        push 0x280
        push 0
        push edi
        call public_424870
        add esp, 0x10
        public_424da6 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x34
        ret 
/*FIXUP public_424daf : nop
        push offset public_679bc0 @0x424daf*/
  FIXUP public_424daf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bc0
/*FIXUP push offset public_679bc0 @0x424db4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bc0
        push edi
        call public_4249c0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x424ce0)
    }
}

#undef public_424d50
#undef public_424d7f
#undef public_424d91
#undef public_424da6
#undef public_424daf
