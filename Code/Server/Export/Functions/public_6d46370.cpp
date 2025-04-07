#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46370);

#define public_6d463ba _public_6d463ba
#define public_6d463ee _public_6d463ee
#define public_6d46407 _public_6d46407
#define public_6d46427 _public_6d46427
#define public_6d46443 _public_6d46443
#define public_6d46445 _public_6d46445
#define public_6d4645a _public_6d4645a
#define public_6d4648a _public_6d4648a
#define public_6d464b0 _public_6d464b0
#define public_6d464c9 _public_6d464c9

PROC_DECLARE(0x6d46370, internal_6d46370, public_6d46370);
extern "C" NAKED register_t __cdecl internal_6d46370()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        call dword ptr ds : [public_6d64c98]
        mov ebp, eax
        push ebp
        call dword ptr ds : [public_6d64ca0]
        push ebp
        call dword ptr ds : [public_6d64c80]
        mov edx, dword ptr ds : [public_6d90144]
        mov esi, dword ptr ds : [public_6d9013c]
        lea ecx, ds:[eax+eax]
        add esp, 0xC
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [public_6d90150], edx
        mov edi, ebp
        jle public_6d4645a
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d463ba : nop
        mov bl, byte ptr ds : [edi]
        mov cl, byte ptr ds : [public_6d9014c]
        mov al, byte ptr ds : [public_6d9014d]
        inc edi
        test cl, cl
        jne public_6d46407
        test al, al
        lea ecx, ds:[esi-8]
        mov eax, edx
        je public_6d463ee
        shr eax, cl
        xor ecx, ecx
        mov cl, bl
        and eax, 0xFF
        xor eax, ecx
        mov eax, dword ptr ds : [eax*4+public_6d8fd38]
        shl edx, 8
        jmp public_6d46443
        public_6d463ee : nop
        shr eax, cl
        shl edx, 8
        and eax, 0xFF
        mov ecx, dword ptr ds : [eax*4+public_6d8fd38]
        xor edx, ecx
        xor eax, eax
        mov al, bl
        jmp public_6d46443
        public_6d46407 : nop
        test al, al
        je public_6d46427
        xor eax, eax
        mov al, bl
        mov ecx, edx
        and ecx, 0xFF
        shr edx, 8
        xor ecx, eax
        mov ecx, dword ptr ds : [ecx*4+public_6d8fd38]
        xor edx, ecx
        jmp public_6d46445
        public_6d46427 : nop
        mov eax, edx
        and eax, 0xFF
        mov ecx, dword ptr ds : [eax*4+public_6d8fd38]
        xor eax, eax
        mov al, bl
        shr edx, 8
        xor edx, ecx
        lea ecx, ds:[esi-8]
        shl eax, cl
        public_6d46443 : nop
        xor edx, eax
        public_6d46445 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        dec eax
        mov dword ptr ds : [public_6d90150], edx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6d463ba
        public_6d4645a : nop
        mov al, byte ptr ds : [public_6d9014c]
        test al, al
        lea ecx, ds:[esi-1]
        mov eax, 1
        jne public_6d4648a
        shl eax, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edx
        lea edi, ds:[eax+eax-1]
        or edi, 1
        and edi, ecx
        mov ecx, dword ptr ds : [public_6d90138]
        sub ecx, esi
        shl edi, cl
        jmp public_6d464c9
        public_6d4648a : nop
        mov ebx, dword ptr ds : [public_6d90138]
        shl eax, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edx
        mov edx, 8
        lea esi, ds:[eax+eax-1]
        or esi, 1
        xor edi, edi
        and esi, ecx
        cmp ebx, edx
        jb public_6d464c9
        mov edi, edi
        public_6d464b0 : nop
        mov eax, esi
        mov ecx, ebx
        sub ecx, edx
        and eax, 0xFF
        shl eax, cl
        add edx, 8
        shr esi, 8
        or edi, eax
        cmp edx, ebx
        jbe public_6d464b0
        public_6d464c9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        push edi
        push ecx
/*FIXUP push offset public_6d6aec0 @0x6d464d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push edx
        call dword ptr ds : [public_6d64c74]
        push ebp
        call dword ptr ds : [public_6d64c94]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d46370)
    }
}

#undef public_6d463ba
#undef public_6d463ee
#undef public_6d46407
#undef public_6d46427
#undef public_6d46443
#undef public_6d46445
#undef public_6d4645a
#undef public_6d4648a
#undef public_6d464b0
#undef public_6d464c9
