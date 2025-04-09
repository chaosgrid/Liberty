#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_56bd40);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57db50);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2a57);

#define public_56bf14 _public_56bf14
#define public_56bfa1 _public_56bfa1
#define public_56c00d _public_56c00d
#define public_56c016 _public_56c016
#define public_56c0c5 _public_56c0c5
#define public_56c13d _public_56c13d
#define public_56c300 _public_56c300
#define public_56c335 _public_56c335
#define public_56c336 _public_56c336

PROC_DECLARE(0x56bd40, internal_56bd40, public_56bd40);
extern "C" NAKED register_t __cdecl internal_56bd40()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c2a57 @0x56bd48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2a57
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x2244
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2264]
        xor ebx, ebx
        cmp edi, ebx
        mov esi, ecx
        je public_56c13d
        mov eax, dword ptr ds : [edi+0x234]
        push eax
        lea ecx, ss:[esp+0x58]
/*FIXUP push offset public_5d0ec4 @0x56bd81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push ecx
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0xB8]
        add esp, 0xC
        call public_57b370
        mov ebp, dword ptr ds : [public_5c62b8]
        push 0x5724
        lea ecx, ss:[esp+0x18]
        call ebp
        mov ecx, dword ptr ds : [esi+0xB8]
        push eax
        mov dword ptr ss : [esp+0x2260], ebx
        call public_57b470
        mov ebx, dword ptr ds : [public_5c62b4]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x225C], 0xFFFFFFFF
        call ebx
        lea edx, ss:[esp+0x2B]
        push edx
        lea ecx, ss:[esp+0x30]
        call public_46ba60
        push 0
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov dword ptr ss : [esp+0x2268], 1
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        lea edx, ss:[esp+0x60]
        push edx
        call public_57db50
        mov ecx, dword ptr ds : [esi+0xB8]
        add esp, 0x10
        lea eax, ss:[esp+0x2C]
        push eax
        call public_57b3e0
        mov ecx, dword ptr ds : [edi+0x270]
        push ecx
        lea edx, ss:[esp+0x58]
/*FIXUP push offset public_5d0ec4 @0x56be2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edx
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0xBC]
        add esp, 0xC
        call public_57b370
        push 0x5724
        lea ecx, ss:[esp+0x18]
        call ebp
        mov ecx, dword ptr ds : [esi+0xBC]
        push eax
        mov byte ptr ss : [esp+0x2260], 2
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x225C], 1
        call ebx
        lea eax, ss:[esp+0x2A]
        push eax
        lea ecx, ss:[esp+0x44]
        call public_46ba60
        push 0
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        mov byte ptr ss : [esp+0x2268], 3
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        lea eax, ss:[esp+0x60]
        push eax
        call public_57db50
        mov ecx, dword ptr ds : [esi+0xBC]
        add esp, 0x10
        lea edx, ss:[esp+0x40]
        push edx
        call public_57b3e0
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_57b370
        mov eax, dword ptr ds : [edi+0x230]
        test eax, eax
        je public_56bfa1
        push eax
        call dword ptr ds : [public_5c61fc]
        add esp, 4
        test eax, eax
        je public_56bfa1
        mov eax, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x158]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_56bf14
        mov word ptr ss : [esp+0x154], ax
        public_56bf14 : nop
        push 0x5724
        lea ecx, ss:[esp+0x18]
        call ebp
        mov ecx, dword ptr ds : [esi+0xC4]
        push eax
        mov byte ptr ss : [esp+0x2260], 4
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x225C], 3
        call ebx
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_46ba60
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x15C]
        push edx
        mov byte ptr ss : [esp+0x2268], 5
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        lea eax, ss:[esp+0x160]
        push eax
        call public_57db50
        mov ecx, dword ptr ds : [esi+0xC4]
        add esp, 0x10
        lea edx, ss:[esp+0x1C]
        push edx
        call public_57b3e0
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x225C], 3
        call public_46ba90
        public_56bfa1 : nop
        mov eax, dword ptr ds : [edi+0x260]
        push eax
        call dword ptr ds : [public_5c6094]
        mov ecx, dword ptr ds : [esi+0xC0]
        add esp, 4
        mov edi, eax
        call public_57b370
        xor eax, eax
        cmp edi, eax
        je public_56c0c5
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov byte ptr ss : [esp+0x225C], 6
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x1000
        lea ecx, ss:[esp+0x258]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        lea ecx, ss:[esp+0x14]
        jne public_56c00d
        push 0xFFFFFFFF
/*FIXUP push offset public_5e2ba0 @0x56c006*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2ba0
        jmp public_56c016
        public_56c00d : nop
        push eax
        lea eax, ss:[esp+0x258]
        push eax
        public_56c016 : nop
        call public_413df0
        push 0x5724
        lea ecx, ss:[esp+0x3C]
        call ebp
        mov ecx, dword ptr ds : [esi+0xC0]
        push eax
        mov byte ptr ss : [esp+0x2260], 7
        call public_57b470
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x225C], 6
        call ebx
        mov cl, byte ptr ss : [esp+0x13]
        push 0
        mov byte ptr ss : [esp+0x20], cl
        push 0
        lea ecx, ss:[esp+0x24]
        call public_42a7e0
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], 0
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        mov byte ptr ss : [esp+0x2268], 8
        mov ebx, eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        push ebx
        call public_57db50
        mov ecx, dword ptr ds : [esi+0xC0]
        add esp, 0x10
        lea eax, ss:[esp+0x1C]
        push eax
        call public_57b3e0
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x225C], 6
        call public_46ba90
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_56c0c5
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_56c0c5 : nop
        mov eax, dword ptr ds : [esi+0xC8]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ds : [esi+0xCC]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ds : [esi+0xC8]
        mov byte ptr ds : [eax+0x498], 1
        mov esi, dword ptr ds : [esi+0xCC]
        lea ecx, ss:[esp+0x40]
        mov byte ptr ds : [esi+0x498], 1
        mov byte ptr ss : [esp+0x225C], 1
        call public_46ba90
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x2260], 0xFFFFFFFF
        call public_53e430
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_46c860
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        jmp public_56c336
        public_56c13d : nop
        mov al, byte ptr ss : [esp+0x13]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call public_42a7e0
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ebx, 9
/*FIXUP push offset public_5e2af4 @0x56c164*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2af4
        mov dword ptr ss : [esp+0x2268], ebx
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_5e2af4 @0x56c17a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2af4
        call public_57e2c0
        mov ecx, dword ptr ds : [esi+0xC4]
        add esp, 0x10
        call public_57b370
        mov edi, dword ptr ds : [public_5c62b8]
        push 0x5724
        lea ecx, ss:[esp+0x18]
        call edi
        mov ecx, dword ptr ds : [esi+0xC4]
        push eax
        mov byte ptr ss : [esp+0x2260], 0xA
        call public_57b470
        mov ebp, dword ptr ds : [public_5c62b4]
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x225C], bl
        call ebp
        mov ecx, dword ptr ds : [esi+0xC4]
        lea edx, ss:[esp+0x1C]
        push edx
        call public_57b3e0
        mov ecx, dword ptr ds : [esi+0xB8]
        call public_57b370
        push 0x5724
        lea ecx, ss:[esp+0x18]
        call edi
        mov ecx, dword ptr ds : [esi+0xB8]
        push eax
        mov byte ptr ss : [esp+0x2260], 0xB
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x225C], bl
        call ebp
        mov ecx, dword ptr ds : [esi+0xB8]
        lea eax, ss:[esp+0x1C]
        push eax
        call public_57b3e0
        mov ecx, dword ptr ds : [esi+0xBC]
        call public_57b370
        push 0x5724
        lea ecx, ss:[esp+0x18]
        call edi
        mov ecx, dword ptr ds : [esi+0xBC]
        push eax
        mov byte ptr ss : [esp+0x2260], 0xC
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x225C], bl
        call ebp
        mov ecx, dword ptr ds : [esi+0xBC]
        lea edx, ss:[esp+0x1C]
        push edx
        call public_57b3e0
        mov ecx, dword ptr ds : [esi+0xC0]
        call public_57b370
        push 0x5724
        lea ecx, ss:[esp+0x50]
        call edi
        mov byte ptr ss : [esp+0x225C], 0xD
        mov ecx, dword ptr ds : [esi+0xC0]
        push eax
        call public_57b470
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x225C], bl
        call ebp
        mov ecx, dword ptr ds : [esi+0xC0]
        lea eax, ss:[esp+0x1C]
        push eax
        call public_57b3e0
        mov eax, dword ptr ds : [esi+0xC8]
        mov bl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFE
        and bl, cl
        mov byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0xCC]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0xC8]
        mov byte ptr ds : [eax+0x498], 0
        mov esi, dword ptr ds : [esi+0xCC]
        mov byte ptr ds : [esi+0x498], 0
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x225C], 0xFFFFFFFF
        mov ebx, eax
        je public_56c335
        lea esp, ss:[esp]
        public_56c300 : nop
        mov edi, esi
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[edi+8]
        call public_45eeb0
        push edi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], ecx
        jne public_56c300
        mov eax, dword ptr ss : [esp+0x20]
        public_56c335 : nop
        push eax
        public_56c336 : nop
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x2258]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2250
        ret 4
        UNREACHABLE_TRAP(0x56bd40)
    }
}

#undef public_56bf14
#undef public_56bfa1
#undef public_56c00d
#undef public_56c016
#undef public_56c0c5
#undef public_56c13d
#undef public_56c300
#undef public_56c335
#undef public_56c336
