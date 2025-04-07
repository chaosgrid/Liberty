#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434d10);
CLANG_FORWARD_PROC_SYMBOL(public_4356c0);
CLANG_FORWARD_PROC_SYMBOL(public_445620);
CLANG_FORWARD_PROC_SYMBOL(public_4456e0);

#define public_452270 _public_452270
#define public_452280 _public_452280
#define public_452298 _public_452298
#define public_452355 _public_452355
#define public_452360 _public_452360
#define public_45238e _public_45238e

PROC_DECLARE(0x452240, internal_452240, public_452240);
extern "C" NAKED register_t __cdecl internal_452240()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [esi+0x48]
        push edi
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c6020]
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ds : [esi+0x14]
        add esp, 4
        or ebx, 0xFFFFFFFF
        xor ecx, ecx
        lea edx, ds:[edi+0x84]
        nop 
        public_452270 : nop
        cmp byte ptr ds : [edx], 0
        je public_452280
        inc ecx
        add edx, 0x10
        cmp ecx, 0x20
        jl public_452270
        jmp public_452298
        public_452280 : nop
        cmp ecx, 0xFFFFFFFF
        mov ebx, ecx
        je public_452298
        shl ecx, 4
        lea ecx, ds:[ecx+edi+0x78]
        mov dword ptr ds : [ecx+8], ebp
        mov dword ptr ds : [ecx+4], eax
        mov byte ptr ds : [ecx+0xC], 1
        public_452298 : nop
        push eax
        call public_4356c0
        mov ecx, eax
        call public_434d10
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        je public_452360
        mov ebp, dword ptr ds : [esi+0x44]
        push 0
        push ebp
        mov ebp, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [edi+0x6C]
        push ebp
        mov ebp, dword ptr ds : [esi+0x38]
        mov eax, dword ptr ds : [public_5c6d58]
        mov edx, dword ptr ds : [edx+0x30]
        mov ecx, dword ptr ds : [eax]
        push ebp
        mov ebp, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [ecx]
        push ebp
        mov ebp, dword ptr ds : [esi+0x30]
        push ebp
        mov ebp, dword ptr ds : [esi+0x2C]
        push ebp
        mov ebp, dword ptr ds : [esi+0x3C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        push ebp
        shl ebx, 4
        lea ebx, ds:[ebx+edi+0x78]
        push ebx
        push edx
        push ecx
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [ebx]
        push ecx
        mov ecx, dword ptr ds : [edi+0x6C]
        mov ebp, eax
        call public_4456e0
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        je public_45238e
        mov ecx, dword ptr ds : [edi+0x6C]
        push ebx
        call public_445620
        cmp eax, 0xFFFFFFFF
        je public_45238e
        mov edx, dword ptr ds : [public_5c6d40]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x90]
        mov edi, eax
        test edi, edi
        je public_452355
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push ebx
        push 0x143
/*FIXUP push offset public_5cd2e4 @0x452340*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd2e4
        mov eax, 0x100002
/*FIXUP push offset public_5cd288 @0x45234a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd288
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        public_452355 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        nop 
        public_452360 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x14B
/*FIXUP push offset public_5cd2e4 @0x45236f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd2e4
        mov eax, 0x100002
/*FIXUP push offset public_5cd248 @0x452379*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd248
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_45238e : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x452240)
    }
}

#undef public_452270
#undef public_452280
#undef public_452298
#undef public_452355
#undef public_452360
#undef public_45238e
