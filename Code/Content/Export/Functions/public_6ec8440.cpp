#include "Content-PCH.h"


#define public_6ec8460 _public_6ec8460
#define public_6ec8469 _public_6ec8469
#define public_6ec8470 _public_6ec8470
#define public_6ec8490 _public_6ec8490
#define public_6ec8494 _public_6ec8494
#define public_6ec8499 _public_6ec8499
#define public_6ec849d _public_6ec849d
#define public_6ec84a9 _public_6ec84a9
#define public_6ec84b9 _public_6ec84b9

PROC_DECLARE(0x6ec8440, internal_6ec8440, public_6ec8440);
extern "C" NAKED register_t __cdecl internal_6ec8440()
{
    __asm
    {
        push ecx
        mov edx, ecx
        mov eax, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [eax+0x9C]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+4], edx
        je public_6ec84b9
        push ebx
        push ebp
        push esi
        lea ebp, ds:[edx+0x10]
        xor ecx, ecx
        nop 
        public_6ec8460 : nop
        cmp ebp, ecx
        jne public_6ec8469
        mov eax, dword ptr ds : [edi+8]
        jmp public_6ec849d
        public_6ec8469 : nop
        mov esi, ebp
        lea eax, ds:[edi+0xC]
        mov edi, edi
        public_6ec8470 : nop
        mov bl, byte ptr ds : [eax]
        mov dl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6ec8494
        cmp dl, cl
        je public_6ec8490
        mov bl, byte ptr ds : [eax+1]
        mov dl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6ec8494
        add eax, 2
        add esi, 2
        cmp dl, cl
        jne public_6ec8470
        public_6ec8490 : nop
        xor eax, eax
        jmp public_6ec8499
        public_6ec8494 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec8499 : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_6ec849d : nop
        cmp eax, ecx
        sete al
        cmp al, cl
        je public_6ec84a9
        mov byte ptr ds : [edi+0x2C], cl
        public_6ec84a9 : nop
        mov eax, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [eax+0x9C]
        jne public_6ec8460
        pop esi
        pop ebp
        pop ebx
        public_6ec84b9 : nop
        mov al, 1
        pop edi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ec8440)
    }
}

#undef public_6ec8460
#undef public_6ec8469
#undef public_6ec8470
#undef public_6ec8490
#undef public_6ec8494
#undef public_6ec8499
#undef public_6ec849d
#undef public_6ec84a9
#undef public_6ec84b9
